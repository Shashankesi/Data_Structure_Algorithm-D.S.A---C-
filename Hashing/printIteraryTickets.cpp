#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printItineraryTickets(const unordered_map<string,string>& tickets){
    unordered_set<string> to;

    // store all destinations
    for(auto ticket : tickets){
        to.insert(ticket.second);
    }

    // find starting point
    string start = "";
    for(auto ticket : tickets){
        if(to.find(ticket.first) == to.end()){
            start = ticket.first;
        }
    }

    // print itinerary
    cout << start << " -> ";
    while(tickets.count(start)){
        cout << tickets.at(start) << " -> ";
        start = tickets.at(start);
    }
    cout << "Destination\n";
}

int main(){
    unordered_map<string,string> tickets;

    tickets["Chennai"] = "Bengaluru";
    tickets["Mumbai"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";

    printItineraryTickets(tickets);

    return 0;
}