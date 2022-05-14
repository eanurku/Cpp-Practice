#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
private:
    int serialNumber{};
    string text{};
public:
    static int objectCounter;
    Message() {}
    Message(const string& val):text(val){
        objectCounter++;
        serialNumber=objectCounter;
    }
    const string& get_text() {
        return text;
    }
    int getSerialNumber(){
        return serialNumber;
    }

};
bool operator<(Message& m1,Message& m2){
        return m1.getSerialNumber()<m2.getSerialNumber();
}
int Message::objectCounter=0;

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        Message message{text};
        return message;
    }
};

class Recipient {
