//
// Created by Clirim on 4/06/2021.
//

#include<iostream>
#include<cstring>
using namespace std;

// your code here

class Recipe {
    int ingN;
    char recipeName[100];
    char * recipeContent;

    void copy(const Recipe &other){
        // cout<<"Copy function"<<endl;
        this->ingN = other.ingN;
        strcpy(this->recipeName, other.recipeName);
        delete [] this->recipeContent;
        this->recipeContent = new char [strlen(other.recipeContent) + 1];
        strcpy(this->recipeContent, other.recipeContent);
    }
public:
    Recipe(int ingN = 0, char recipeName[100] = "PlaceHolder", char * contents = "Empty Content") {
        this->ingN = ingN;
        strcpy(this->recipeName,recipeName);
        recipeContent = new char[strlen(contents) + 1];
        strcpy(recipeContent,contents);
    }

    Recipe& operator=(const Recipe& other){
        if(this != &other){
            copy(other);
        }
        return *this;
    }

    void operator ++ () {
        ingN++;
    }
    void operator ++ (int) {
        ingN++;
    }

    void print() {
        cout << ingN << endl << recipeName << endl << recipeContent << endl;
    }

    bool Eq(Recipe & r1) {
        if(strcmp(this->recipeName, r1.recipeName) == true)
            return true;
        else
            return false;
    }

    void set_num_ing(int i) {
        ingN = i;
    }

    void set_name(char string[100]) {
        strcpy(recipeName,string);
    }

    void set_contents(char * contents) {
        strcpy(recipeContent, contents);
    }

    int getIngredients() {
        return ingN;
    }
};

class RecipesBook {
    char rbName[100];
    Recipe * recipes;
    int ArrayElCount;
public:
    RecipesBook(char rbName[100]) {
        strcpy(this->rbName, rbName);
        this->ArrayElCount = 0;
        recipes = new Recipe[ArrayElCount];
    }

    RecipesBook(const RecipesBook & other) {
        strcpy(this->rbName, other.rbName);
        this->ArrayElCount = other.ArrayElCount;
        delete[] this->recipes;
        this->recipes = new Recipe[ArrayElCount];
        for(int i = 0; i < ArrayElCount; i++) {
            this->recipes[i] = other.recipes[i];
        }
    }

    RecipesBook& operator=(const RecipesBook &other){
        strcpy(this->rbName, other.rbName);
        this->ArrayElCount = other.ArrayElCount;
        delete [] this->recipes;
        Recipe *temp = new Recipe [other.ArrayElCount];
        for(int i = 0; i<ArrayElCount; i++)
        {
            temp[i] = other.recipes[i];
        }
        this->recipes = new Recipe [this->ArrayElCount];
        for(int i = 0; i<ArrayElCount; i++){
            this->recipes[i] = temp[i];
        }
        delete [] temp;

        return *this;

    }

    void add(Recipe & r1) {
        for(int i = 0; i < ArrayElCount; i++) {
            if(this->recipes[i].Eq(r1))
                break;
            else {
                Recipe *tmp = new Recipe[ArrayElCount + 1];
                for(int i = 0; i < ArrayElCount; i++) {
                    tmp[i] = recipes[i];
                }
                tmp[ArrayElCount] = r1;
                ArrayElCount++;
                delete[] recipes;
                recipes = new Recipe[ArrayElCount];
                for(int i = 0; i < ArrayElCount; i++) {
                    recipes[i] = tmp[i];
                }
                delete[] tmp;
            }
        }
    }

    void print() {
        cout << rbName << endl;
        for(int i = 0; i<ArrayElCount; i++)
        {
            recipes[i].print();
        }
    }

    RecipesBook novaBrosura(Recipe & other){
        RecipesBook temp(this->rbName);
        for(int i = 0; i<this->ArrayElCount; i++)
        {
            if(other.getIngredients() > recipes[i].getIngredients())
            {
                Recipe tempRecipe = recipes[i];
                tempRecipe.set_num_ing(other.getIngredients());
                temp.add(tempRecipe);
            }

        }
        return temp;

    }
};

int main()
{
    Recipe rec;
    int n;
    char name[100], contents[200];
    int num_ing;
    cin >> name >> n;
    RecipesBook b1(name);
    Recipe last;
    for(int i = 0; i < n; i++){
        cin >> num_ing >> name >> contents;
        Recipe r(num_ing, name, contents);
        b1.add(r);
        last = r;
    }
    b1.print();
    cin >> num_ing >> name >> contents;
    rec.set_num_ing(num_ing);
    rec.set_name(name);
    rec.set_contents(contents);
    b1.add(rec);
    b1.print();
    RecipesBook b2 = b1.novaBrosura(rec);
    b2.print();
    // testing copy constructor
    cout << "b2 copy" << endl;
    RecipesBook rb = b2;
    last.set_name("changed-name");
    rb.add(last);
    rb.print();
    cout << "original" << endl;
    b2.print();
    return 0;
}