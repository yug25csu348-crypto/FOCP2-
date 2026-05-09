#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class MovieTicket {
private:
    struct Movie {
        unordered_set<int> customers;
        int avail = 100;
    };
    unordered_map<int, Movie> movies;
public:
    bool book(int x, int y) {
        if (movies[y].customers.count(x)) return false;
        if (movies[y].avail == 0) return false;
        movies[y].customers.insert(x);
        movies[y].avail--;
        return true;
    }
    bool cancel(int x, int y) {
        if (movies[y].customers.find(x) == movies[y].customers.end()) return false;
        movies[y].customers.erase(x);
        movies[y].avail++;
        return true;
    }
    bool isBooked(int x, int y) {
        return movies[y].customers.count(x);
    }
    int availableTickets(int y) {
        return movies[y].avail;
    }
};

int main() {
    int Q;
    cin >> Q;
    MovieTicket mt;
    for(int i = 0; i < Q; i++) {
        string op;
        cin >> op;
        if(op == "BOOK") {
            int x, y;
            cin >> x >> y;
            cout << (mt.book(x, y) ? "true" : "false") << endl;
        } else if(op == "CANCEL") {
            int x, y;
            cin >> x >> y;
            cout << (mt.cancel(x, y) ? "true" : "false") << endl;
        } else if(op == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;
            cout << (mt.isBooked(x, y) ? "true" : "false") << endl;
        } else if(op == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;
            cout << mt.availableTickets(y) << endl;
        }
    }
    return 0;
}
