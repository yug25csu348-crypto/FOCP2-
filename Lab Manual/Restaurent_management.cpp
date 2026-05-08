#include<iostream>
using namespace std;

class Restaurant {
    private:
        string name;
        int availableMeals;
        int availableDrinks;

    public:
        Restaurant(string name, int meals, int drinks) {
            this->name = name;
            this->availableMeals = meals;
            this->availableDrinks = drinks;
        }

        void orderMeal(int meals) {
            if (meals > availableMeals) {
                cout << "Sorry, not enough meals available." << endl;
            } else {
                availableMeals -= meals;
                cout << "Meal ordered: " << meals << ". Meals left: " << availableMeals << endl;
            }
        }

        void orderDrink(int drinks) {
            if (drinks > availableDrinks) {
                cout << "Sorry, not enough drinks available." << endl;
            } else {
                availableDrinks -= drinks;
                cout << "Drink ordered: " << drinks << ". Drinks left: " << availableDrinks << endl;
            }
        }

        void displayMenu() {
            cout << "Welcome to " << name << "!" << endl;
            cout << "Available meals: " << availableMeals << endl;
            cout << "Available drinks: " << availableDrinks << endl;
        }

};

int main() {
    Restaurant restaurant("Food Haven", 50, 30);
    restaurant.displayMenu();
    restaurant.orderMeal(5);
    restaurant.orderDrink(3);
    restaurant.orderMeal(60);
    restaurant.orderDrink(40);
    return 0;
}
