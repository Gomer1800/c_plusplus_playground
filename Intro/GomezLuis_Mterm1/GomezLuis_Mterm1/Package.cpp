#include "Package.h"
#include <iostream>
#include <iomanip>
using namespace std;

Package::Package(const string& namSend, const string& adSend, const string& ctSend, const string& stSend, const string& zipSend,
	const string& namRec, const string& adRec, const string& ctRec, const string& stRec, const string& zipRec, 
	double wt, double cost){
	this->setSendName(namSend);
	this->setSendAddress(adSend);
	this->setSendCity(ctSend);
	this->setSendState(stSend);
	this->setSendZIP(zipSend);

	this->setRecName(namRec);
	this->setRecAddress(adRec);
	this->setRecCity(ctRec);
	this->setRecState(stRec);
	this->setRecZIP(zipRec);

	this->setWeight(wt);
	this->setCostPerOunce(cost);
}

// SENDER INFO
void Package::setSendName(const string& nam){
	this->nameSend = nam;
}
const string& Package::getSendName() const{
	return this->nameSend;
}

void Package::setSendAddress(const string& ad){
	this->addressSend = ad;
}
const string& Package::getSendAddress() const{
	return this->addressSend;
}

void Package::setSendCity(const string& ct){
	this->citySend = ct;
}
const string& Package::getSendCity() const{
	return this->citySend;
}

void Package::setSendState(const string& st){
	this->stateSend = st;
}
const string& Package::getSendState() const{
	return this->stateSend;
}

void Package::setSendZIP(const string& zip){
	this->ZIPSend = zip;
}
const string& Package::getSendZIP() const{
	return this->ZIPSend;
}

// RECIPIENT INFO INFO
void Package::setRecName(const string& nam) {
	this->nameRec = nam;
}
const string& Package::getRecName() const {
	return this->nameRec;
}

void Package::setRecAddress(const string& ad) {
	this->addressRec = ad;
}
const string& Package::getRecAddress() const {
	return this->addressRec;
}

void Package::setRecCity(const string& ct) {
	this->cityRec = ct;
}
const string& Package::getRecCity() const {
	return this->cityRec;
}

void Package::setRecState(const string& st) {
	this->stateRec = st;
}
const string& Package::getRecState() const {
	return this->stateRec;
}

void Package::setRecZIP(const string& zip) {
	this->ZIPRec = zip;
}
const string& Package::getRecZIP() const {
	return this->ZIPRec;
}

//WEIGHT & COST INFO
void Package::setWeight(double wt){
	this->weight = wt;
}
double Package::getWeight() const{
	return this->weight;
}

void Package::setCostPerOunce(double cost){
	this->costPerOunce = cost;
}
double Package::getCostPerOunce() const{
	return this->costPerOunce;
}

double Package::calculateCost() const{
	return (this->costPerOunce * this->weight);
}

// toString Package's information (virtual, but not pure virtual)
string Package::toString() const {
	return "\n\tPackage: \nSender Name: " + getSendName() +
		"\nSender Address: " + getSendAddress() +
		"\nSender City: " + getSendCity() +
		"\nSender State: " + getSendState() +
		"\nSender ZIP: " + getSendZIP() +

		"\n\nRecipient Name: " + getRecName() +
		"\nRecipient Address: " + getRecAddress() +
		"\nRecipient City: " + getRecCity() +
		"\nRecipient State: " + getRecState() +
		"\nRecipient ZIP: " + getRecZIP() +
		"\n\nWeight: " + to_string(getWeight()) + " oz ... 6 Significant Digits Guaranteed!";
}