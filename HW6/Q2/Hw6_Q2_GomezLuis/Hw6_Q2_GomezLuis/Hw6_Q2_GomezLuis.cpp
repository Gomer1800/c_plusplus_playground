/*Luis Gomez
CS 135 Mon Nights
HW 6 Q2
*/

#include<iostream>
#include<iomanip>
using namespace std;

const int NUM_ROWS = 15;
const int NUM_SEATS = 20;
//FUNCT PROTOTYPES
void theaterChart(char[NUM_ROWS][NUM_SEATS]);
void priceSetUp(double[NUM_ROWS]);
char boxOffice();

int main()
{
	char theaterSeats[NUM_ROWS][NUM_SEATS];
	double ticketPrices[NUM_ROWS];

	char menuSelect = 0;
	bool quitMenu = 0;
	int numSold = 0;
	double totRev = 0.0;

	for (int j = 0; j < NUM_ROWS; j++) //ARRAYS INITIALIZED TO * (empty seat)
	{
		ticketPrices[j] = 0.0;
		for (int i = 0; i < NUM_SEATS; i++)
		{
			theaterSeats[j][i] = '*';
		}
	}

	//DISPLAY SEATING CHART
	theaterChart(theaterSeats);
	//ASK USER FOR TICKET PRICES, ROW BY ROW
	priceSetUp(ticketPrices);
	//PROMPT BOX OFFICE MENU
	do
	{
		int rowSelect, seatSelect = 0;
		
		menuSelect = boxOffice();
		switch (menuSelect)
		{
		case '1':
			//ASK USER FOR DESIRED ROW/SEAT #
			cout << "\nPlease enter a row number and seat number for the ticket:" << endl;
			cout << "Row # : ";
			do
			{
				cin >> rowSelect;
				if ((rowSelect > 14) || (rowSelect<0))
					cout << "Row # must be between 0 and 14. Please enter again: " << endl;
			} while ((rowSelect>14) || (rowSelect<0));//||(seatSelect<1)||(seatSelect>20)
			cout << "Seat # : ";
			do
			{
				cin >> seatSelect;
				if ((seatSelect<0) || (seatSelect>19))
					cout << "Seat # must be between 0 and 19. Please enter again: " << endl;
			} while ((seatSelect<0) || (seatSelect>19));
			//CHECK FOR SEAT AVAILABILITY
			if (theaterSeats[rowSelect][seatSelect] == '#')
				cout << "\nSorry. The ticket is not available for this seat." << endl;
			else
			{
				theaterSeats[rowSelect][seatSelect] = '#';
				totRev += (ticketPrices[rowSelect]);
				numSold++;
			}
			break;
		case 'q':
			cout << "\nUPDATED SEATING CHART AND SALES INFO" << endl;
			cout << "------------------------------------" << endl;
			theaterChart(theaterSeats);
			cout << "\n\nTOTAL TICKETS SOLD: " << numSold << endl;
			cout << "TOTAL REVENUE: $" << fixed << setprecision(2) << totRev << endl;
			quitMenu = 1;
			break;
		case 'Q':
			cout << "UPDATE SEATING CHART AND SALES INFO" << endl;
			cout << "-----------------------------------" << endl;
			theaterChart(theaterSeats);
			cout << "\nTOTAL TICKETS SOLD: " << numSold << endl;
			cout << "TOTAL REVENUE: $" << fixed << setprecision(2) << totRev << endl;
			quitMenu = 1;
			break;
		default:
			cout << "Invalid selection. Please try again." << endl;
			break;
		}
	}while (quitMenu == 0);

	//system("PAUSE");
	//return 0;
}

void theaterChart(char theArray[NUM_ROWS][NUM_SEATS])
{
	//SET UP HORIZONTAL HEADER
	cout << "Seats:";
	for (int setUp = 0; setUp < NUM_SEATS; setUp++)
	{			
		cout << " " << setw(2) << (setUp);
	}

	for (int j = 0; j < NUM_ROWS; j++)
	{
		cout << "\nRow " << (j);
		if (j <= 9)
			cout << " ";
		for (int i = 0; i < NUM_SEATS; i++)
		{
			cout << " " << setw(2) << theArray[j][i];
		}
	}
}

void priceSetUp(double prices[NUM_ROWS])
{
	double price = 0.0;

	cout << "\n\nPlease enter a ticket price for each row." << endl;
	for (int j = 0; j < NUM_ROWS; j++)
	{
		cout << "Row #" << (j) << " : ";
		do
		{
			cin >> price;
			if (price <= 0.0)
				cout << "That is an invalid entry, please try again...";
			else
				prices[j] = price;
		} while (price <= 0.0);
	}
}

char boxOffice()
{
	char selection = 0;
	cout << "\nMOVIE THEATER MENU" << endl;
	cout << "------------------" << endl;
	cout << "1) Sell a ticket" << endl;
	cout << "Q) Quit program" << endl;
	cout << "Please make a selection : ";
	
	cin >> selection;
	return selection;
}