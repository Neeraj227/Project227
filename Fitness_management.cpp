#include<iostream>
#include<string>

#include<fstream>
#include<ctime>

using namespace std;

void mainmenu();
int choice, fee;
// dates of SignUP
int D, M, Y;
bool cinfail;
long long int confirmation, age, contactNo;
string name, gender, password, password2, mov;

class diet
{
    public:
        int dd; //date
        char ch;  // to check for veg or non veg
        virtual void get_diet()
        {  // virtual funtion used
            time_t t = time(0);  // get time now
            struct tm *now = localtime(&t);
            dd= (now->tm_wday); //get todays date
            cout<<"Enter V for vegetarian or N for Non-Vegetarian "<<endl;
            cin>> ch;
            if(ch == 'V'|| ch == 'v'){
                cout<<"VEGETARIAN"<<endl;
                switch(dd)
                {
                    case 0:
                    {
                        cout<<"Sunday \nYour Diet for Sunday is:" <<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(300 calories)\nOats with fruit and Nuts and Milk "<<endl;
                        cout<<"Lunch (330 Calories)\nGreen Salad, 2 cups mixed greens, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (430 Calories)\n1 serving Mozzarella, Basil, 1 cup mixed green, salad, tofu"<<endl;
                        break;
                    }
                    case 1:
                    {
                        cout<<"Monday \nYour Diet for Monday is:" <<endl;
                        cout<<"Empty Stomach: hot water with tulsi leaves\n"<<endl;
                        cout<<"Breakfast(300 calories)\nBread with fruit and Nuts and Milk "<<endl;
                        cout<<"Lunch (320 Calories)\nGreen Salad, 2 cups mixed greens, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (420 Calories)\n1 Makki Ki roti with sarso saag, salad, tofu"<<endl;
                        break;
                    }
                    case 2:
                    {
                        cout<<"Tuesday \nYour Diet for Tuesday is:" <<endl;
                        cout<<"Empty Stomach: Honey + hot water\n"<<endl;
                        cout<<"Breakfast(300 calories)\nCorn Flakes with fruit and Nuts and Milk "<<endl;
                        cout<<"Lunch (300 Calories)\nGreen Salad, green vegetables, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (440 Calories)\n1 soup multi grain Khichdi, 1 cup mixed green, salad, tofu"<<endl;
                        break;
                    }
                    case 3:
                    {
                        cout<<"Wednesday \nYour Diet for Wednesday is:" <<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(300 calories)\n Bread with peanut butter and Nuts and Milk "<<endl;
                        cout<<"Lunch (330 Calories)\nBlack Chole, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (430 Calories)\n1 serving Mozzarella, Basil, 1 cup mixed green, salad, tofu"<<endl;
                        break;
                    }
                    case 4:
                    {
                        cout<<"Thursday \nYour Diet for Thursday is:" <<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(300 calories)\n Soy yougurt with granola, cacao nibs, berries "<<endl;
                        cout<<"Lunch (290 Calories)\nRed Lentil pasta cups mixed greens, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (390 Calories)\n1 mixed bean chili sin carne, Basil, 1 cup mixed green, salad, tofu"<<endl;
                        break;
                    }
                    case 5:
                    {
                        cout<<"Friday \nYour Diet for Friday is:" <<endl;
                        cout<<"Empty Stomach: Coconut Milk, walnut, ice & water\n"<<endl;
                        cout<<"Breakfast(300 calories)\nOats with fruit and Nuts and Milk "<<endl;
                        cout<<"Lunch (320 Calories)\nGreen Salad, 2 cups mixed greens, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (440 Calories)\n1 Paneer roll, 1 cup mixed green, salad"<<endl;
                        break;
                    }
                    case 6:
                    {
                        cout<<"Saturday \nYour Diet for Saturday is:" <<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(300 calories)\nOats with fruit and Nuts and Milk "<<endl;
                        cout<<"Lunch (320 Calories)\nGreen Salad, 2 cups mixed greens, 1 cup rice or 2 chappati"<<endl;
                        cout<<"Dinner (400 Calories)\n1 Bajra Khichdi, Basil, 1 cup mixed green, salad,"<<endl;
                        break;
                    }
                }
            }
            else if (ch=='N'||ch=='n'){ // if the person is non vegetarian
                cout<<"NON VEGETARIAN"<<endl;
                switch(dd)
                {
                    case 0:{
                        cout<<"Sunday \nYour Diet for Sunday is:"<<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(350 calories) \nGlass whey protein,3 boiled eggs, medium apple, chopped walnut"<<endl;
                        cout<<"Lunch(250 calories)\nGreen Salad with spicy chickpea nuts,  Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(420 calories)\n200g grilled fish, brown rice, top salad, bliled vegetables"<<endl;
                        break;
                    }
                    case 1:{
                        cout<<"Monday \nYour Diet for Monday is:"<<endl;
                        cout<<"Empty Stomach: Banana or some fruits\n"<<endl;
                        cout<<"Breakfast(350 calories) \nwhey protein,2 boiled eggs, grapes, chopped almond"<<endl;
                        cout<<"Lunch(260 calories)\nGrilled fish, Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(420 calories)\n250 g chicken, rice, top salad, bliled vegetables"<<endl;
                        break;
                    }
                    case 2:{
                        cout<<"Tuesday \nYour Diet for Tuesday is:"<<endl;
                        cout<<"Empty Stomach: a glass of protein shakes\n"<<endl;
                        cout<<"Breakfast(350 calories) \nGlass whey protein,2 boiled eggs, big mango, chopped nuts"<<endl;
                        cout<<"Lunch(270 calories)\nGreen Salad with spicy chickpea nuggets,  Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(400 calories)\n200g Chicken Soup, top salad, bliled vegetables"<<endl;
                        break;
                    }
                    case 3:{
                        cout<<"Wednesday \nYour Diet for Wednesday is:"<<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(350 calories) \nGlass whey protein,3 boiled eggs, medium apple, chopped walnut"<<endl;
                        cout<<"Lunch(250 calories)\nGreen Salad with spicy chickpea nuts,  Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(420 calories)\n200g Broccoli Salad with flax oil dressing"<<endl;
                        break;
                    }
                    case 4:{
                        cout<<"Thursday \nYour Diet for Thursday is:"<<endl;
                        cout<<"Empty Stomach: any healthy fruits or their juice\n"<<endl;
                        cout<<"Breakfast(350 calories) \nGlass whey protein,3 boiled eggs,watermelon , cashew"<<endl;
                        cout<<"Lunch(280 calories)\nGreen Salad with spicy chickpea nuts,  Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(400 calories)\n200g grilled fish, brown rice, top salad, bliled vegetables"<<endl;
                        break;
                    }
                    case 5:{
                        cout<<"Friday \nYour Diet for Friday is:"<<endl;
                        cout<<"Empty Stomach: Honey + Lemon in hot water\n"<<endl;
                        cout<<"Breakfast(350 calories) \nGlass whey protein,3 boiled eggs, grapes, almond"<<endl;
                        cout<<"Lunch(300 calories)\nFish with spicies twist,  Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(440 calories)\n200g Chicken, brown rice, top salad, bliled vegetables"<<endl;
                        break;
                    }
                    case 6:{
                        cout<<"Saturday \nYour Diet for Saturday is:"<<endl;
                        cout<<"Empty Stomach: A glass of protein shake\n"<<endl;
                        cout<<"Breakfast(320 calories) \nGlass whey protein,3 boiled eggs, mango"<<endl;
                        cout<<"Lunch(250 calories)\nGreen Salad with spicy chickpea nuts,  Roti/Rice+ Sabji "<<endl;
                        cout<<"Dinner(420 calories)\n200g grilled fish, brown rice, top salad, bliled vegetables"<<endl;
                        break;
                    }
                }
            }

        }
};
class schedule ;
class workouts{
    int options;
    public:
        friend class schedule;//schedule class is made friend of the workouts class
        void subscription(){ // subscription function defined 
            int option;
            cout<<"Select your Subscription\n";
            cout<<"Enter 1 for One Month(1000Rs)\nEnter 2 for Two Months(1850Rs)\nEnter 3 for Six Months(4800Rs)\nEnter 4 for twelve Months(9000)\n";
            // return to this point if input is valid
            here:
           
            cin>>option;
                switch(option){
                    case 1: {
                        fee = 1000;
                        break;
                    }
                    case 2: {
                        fee = 1850;
                        break;
                    }
                    case 3: {
                        fee = 4800;
                        break;
                    }
                    case 4: {
                        fee = 9000;
                        break;
                    }
                    default:{
                        cout<<"INVALID INPUT"<<endl;
                        cout<<"Please choose a valid option"<<endl;
                        goto here;
                        break;
                    }
                }

                if(age>45 && (gender == "Male"|| gender == "male"||gender == "m"|| gender == "M")){
                    fee -=0.20*fee;
                    cout<<"Taking into consideration your age and dedication we provide you with an additional discount of 20%\n";
                }
                else if (age>45 && (gender=="Female"||gender=="female"||gender=="f"||gender=="F")){
                    fee-=0.25*fee;
                    cout<<"Taking into consideration your age and dedication we provide you with an additonal discount of 25%\n";
                }
        }
        void ab_workouts(){
            cout<<"Following is the list of some Ab workouts :"<<endl;
            cout<<"1. SPIDERMAN PLANK CRUNCH\n2. CABLE ROTATION\n3. BICYCLE CRUNCH\n4. BARBELL CURL\n5. DUMBBELL BICEPS\n";
            
        }
        void biceps_workouts(){
            cout<<"Following is the list of some Biceps Building workouts:"<<endl;
            cout<<"1. INCLINE HAMMER CURLS\n2. INCLUNE INNER-BICEPS CURL\n3. STANDING CONCENTRATION CURL\n4. BARBELL CURL\n5. DUMBBELL BICEPS\n";

        }
        void fat_loss(){
            cout<<"Following is the list of some Fat Loss workouts:"<<endl;
            cout<<"1. ELBOW PLANT\n2. CRUNCHES\n3. HYPEREXTENSIONS\n4. ROPE JUMPING\n5. BODYWEIGHT SQUAT\n6. SIT UP\n";

        }
        void Muscle_Building(){
            cout<<"Following is the list of some Muscle Building loss workouts:"<<endl;
            cout<<"1. BARBELL SQUAT\n2. BARBELL BENCH PRESS - MEDIUM GRIP\n3. BENT OVER BARBELL ROW\n4. SIDE LATERAL RAISE\n";

        }
        void Cardio(){
            cout<<"Following  is the list of some Cardio workouts :\n";
            cout<<"1. BUTT KICK\n2. INCHWORM \n3. MOUNTAIN CLIMBER TWIST\n4. SQUAT JUMP\n5. PLANK WITH KNEE TUCK TO HIP ABDUCTION\n";

        }
        void Fullbodytonning(){
            cout<<"Following is the list of some Full Body toning workouts :"<<endl;
            cout<<"1. PLATYPUS WALKS\n2. PLIE TOE SQUATS\n3. SINGLE LEG DEADLIFT\n4. SQUAT JUMP\n5. PLANK WITH KNEE TUCK TO HIP ABDUCTION\n";
        }        
        void Break_up(){
            cout<<"Following is the list of some Full Body toning workouts :"<<endl;
            cout<<"1. Yoga Classes\n2. Meditation\n3. Push Up Exercises \n4. bench press\n";
        }
        
};
class schedule{
    public:
    int dd;
    void get_SCHEDULE(){
        time_t t= time(0);  // get time now
        struct tm *now = localtime(&t);
        dd=(now->tm_wday);
        {
            switch(dd){
                case 0: {
                    cout<<"SUNDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
                case 1: {
                    cout<<"MONDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
                case 2: {
                    cout<<"TUESDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
                case 3: {
                    cout<<"WEDNESDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
                case 4: {
                    cout<<"THURSDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
                case 5: {
                    cout<<"FRIDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
                case 6: {
                    cout<<"SATURDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:";
                    break;
                }
            }
            workouts w;
            /*read mov=choice from file*/
            int ch=mov[0]-'0';
            switch(ch){
                case 1:{
                    w.fat_loss();
                    break;
                }
                case 2:{
                    w.ab_workouts();
                    break;
                }
                case 3:{
                    w.Muscle_Building();
                    break;
                }
                case 4:{
                    w.biceps_workouts();
                    break;
                }
                case 5:{
                    w.Cardio();
                    break;
                }
                case 6:{
                    w.Fullbodytonning();
                    break;
                }
            }
              
        }
    }
};
class dat: public diet{  // inheriting diet class just for the sake of oops concept
    int day,month,yr,m[12];
    public:
    dat(){
        day=D;
        month=M;
        yr=Y;
        m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
        m[4]=m[6]=m[9]=m[11]=30;
        if(yr%4==0){
            m[2]=29;// to check leap year
        }
        else {
            m[2]=28;
        }
    }
    dat(int a, int b, int c){  // constructor
        day=a;
        month=b;
        yr=c;
        m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
        m[4]=m[6]=m[9]=m[11]=30;
        if(yr%4==0){
            m[2]=29;
        }
        else {
            m[2]=28;
        }
    }
    
    void print(){
        cout<<day<<" : "<<month<<" : "<<yr;
    }
    bool operator ^(dat &obj1){
        // return true if dates are same
        return (!((obj1.day==day)&&(obj1.month==month)&&(obj1.yr==yr)));
    }
    void incre(){
        // func to increment day by 1
        for (int i=1; i<=12;i++){
            if(month == i){
                if(day < m[i]){
                    // If date exist, increment by one
                    ++day;
                }
                else{
                    // start of next month
                    day = 1;
                    ++month;
                    if(month > 12){
                        // if month doesn't exist, set it Jan
                        month = 1;
                        // increment year
                        ++yr;
                    }
                }
                break;
            }
        }
    }
};
void writetofile(string name){
    ofstream writefile;

    string file= name+".txt";
    time_t t= time(0);
    struct tm * now = localtime(&t);
    //writefile.open(file.c_str());
    writefile.open(file.c_str());
    writefile<<"your password: "<<password<<endl;
    writefile<<"Motive: "<<mov<<endl;
    writefile<<"Subscription date was: "<<now->tm_mday<<" "<< (now->tm_mon+1)<<" "<<(now->tm_year +1900) <<endl;
    writefile<<"Your age: "<<age<<endl;
    writefile<<"Gender: "<<gender<<endl;
    writefile<<"Mobile No.: "<<contactNo<<endl;
    writefile<<"fees: "<<fee<<endl;
    writefile.close();
    mainmenu();
}
void registerpassword(){
    cout<<"Please enter the password:"<<endl;
    cin>>password;
    cout<<"Please renter your password:"<<endl;
    cin>>password2;
    if(password == password2){
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Enter your age :"<<endl;
        cin>>age;
        cout<<"Enter your gender :"<<endl;
        cin>> gender;
        cout<<"Enter your mobile no."<<endl;
        cin>>contactNo;
        while(contactNo/10000000000||contactNo/1000000000==0){
            cout<<"Please enter valid Mobile Number"<<endl;
            cin>>contactNo;
        }
        cout<<"Please tell us your motive to join the gym \n";
        cout<<"1. Fat Loss\n2. Abs Building\n3. Muscle Building\n4. Biceps Building\n5. Cardio\n6. Full Body Toning\n7. Break Up "<<endl;
        cin>>choice;
        workouts W;
        switch(choice){
            case 1:{
                W.fat_loss();
                W.subscription();
                mov="1";
                break;
            }
            case 2:{
                W.ab_workouts();
                W.subscription();
                mov="2";
                break;
            }
            case 3:{
                W.Muscle_Building();
                W.subscription();
                mov="3";
                break;
            }
            case 4:{
                W.biceps_workouts();
                W.subscription();
                mov="4";
                break;
            }
            case 5:{
                W.Cardio();
                W.subscription();
                mov="";
                break;
            }
            case 6:{
                W.Fullbodytonning();
                W.subscription();
                mov="6";
                break;  
            }
            
        }
        cin.clear();
        cin.ignore(10000,'\n');
        writetofile(name);
        exit(1);

    }
    else{
        cout<<"Sorry the password did not match"<<endl;
        registerpassword();
    }
}
void SignUp(){  // signup module
    cout<<"Please Enter your Name: "<<endl;
    getline(cin,name);
    cout<<"\nUsername ="<<name <<"\nConfirm? \n[1] Yes \n[2] No"<<endl;
    cin>>confirmation;
    if(confirmation == 1){
        registerpassword();
    }
    else{
        cout<<"Please try Again:"<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        SignUp();
    }
}
void SignIn(){
    cout<<"Enter your Username:"<<endl;
    getline(cin,name);
    string fExt=".txt";
    fExt=name+fExt;
    fstream file1(fExt.c_str());
    if(!file1){
        cout<<"Please register your self first "<<endl;
        SignUp();
    }
    file1.ignore(20,' ');
    file1.ignore(20,' ');

    string pass;
    getline(file1,pass);
    file1.ignore(20,' ');
    getline(file1,mov);
    string in; //date
    file1.ignore(100,':');
    getline(file1,in);
    // int d=0,i,y=0;
    // for(i=0;in[i]^' ';i++){
    //     d=d*10+in[i]-'0';
    // }
    // D=d;
    // int m=0;
    // i++;
    // for(;in[i]^' ';i++){
    //     m=m*10+in[i]-'0';
    // }
    // M=m;
    // i++;
    // for(;in[i];i++){
    //    y=y*10+in[i]-'0';   
    // }
    // Y=y;
    time_t t=time(0);
    struct tm *now = localtime(&t);
    D = now->tm_mday;
    M = now->tm_mon + 1;
    Y = now->tm_year + 1900;
    cout<<"Enter the password: "<<endl;
    cin>>password;
    int count = 3;
    while(pass!=password&&count){
        cout<<"you have "<<count<<"chances left\n";
        cout<<"Please Enter the correct password"<<endl;
        cin>>password;
        count--;
    }
    if(count){
        cout<<" \tWELCOME TO ONLINE FITNESS CENTER\n"<<name<<endl;
    }
    else{
        cout<<"Enter\n1.\t Go to Menu\t\n2.\t For Exit\t \n";
        cin>>choice;
        switch(choice){
            case 1:{
            mainmenu();
            break;
            }
            case 2:{
            exit(1);
            break;
            }
        }

    }
    cout<<"Hello, "<<name<<endl;
    jump:
    cout<<"What would you like to check\n";
    cout<<"1. Check Todays Schedule\n2. Check todays diet\n3. Check your subscription\n4. EXIT\n";
    cin>>choice;
    do{
        cinfail = cin.fail();
        cin.clear();
        cin.ignore(10000,'\n');
    }
    while(cinfail == true);{
        switch (choice){
            case 1:{
                schedule s;
                s.get_SCHEDULE();
                break;
            }
            case 2:{
                
                dat d;
                diet* d1 = &d;
                d1->get_diet();

                // d.get_diet();
                break;
            }
            case 3:{
                time_t t=time(0);
                struct tm *now = localtime(&t);
                dat obj, obj1(now->tm_mday,(now->tm_mon+1),(now->tm_year + 1900));
                int count=0;
                if(!(obj^obj1)){
                    cout<<"You Have Joined Today Only\n";
                }
                while(obj^obj1){
                    
                    obj.incre();
                    count++;
                    // break;
                }
                cout<<"Your Joining date was "<<D<<"-"<<M<<"-"<<Y<<endl;
                cout<<"You have joined for "<<count<<" days"<<endl;
                break;
            }
            case 4:{
                exit(1);
            }
        }
    }
    goto jump;
}
void exit(){
    exit(0);
}
void mainmenu(){
    cout<<"Hello, Would you like to log in or register \n1. SignIn\n2. SignUp\n3. Exit"<<endl;
    cin>>choice;
    do{
        cinfail=cin.fail();
        cin.clear();
        cin.ignore(10000,'\n');
    }
    while(cinfail == true);{
        switch(choice){
            case 1:{
            SignIn();
            break;
            }    
            case 2:{
            SignUp();
            break;
            }    
            case 3:{
            exit();
            }    
        }
    }
}
int main(){
    // system("Color 03"); 
    system("Color 80"); 
    
    mainmenu();    
}
