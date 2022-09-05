//Dispensary model 4

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;
//advanced declaration
void Problems_Ailment();
//void Items_to_Issue();
//void Items_to_Return();
//void Display_Details();
void quit();
//class student;   //advanced declaration of class
//void student_set_details(); //declaration of a function tat assins values for protected memeber variable student stu[5];
//void Items_to_issue();	//can use protected stuff for its operations
//void Items_to_return();	//can use protected stuff for its operations
//void display_details(); //can use protected stuff for its operations
//class items; 
//class set_values;
void try_catch_block(int x);


int main()
{   

   cout<<" :::::WELCOME TO SRI SATYA SAI HOSTEL DISPENCARY--MUDDENAHALLI CAMPUS::::: "<<endl;   
   cout<<endl;
   cout<<"::Choose your services::"<<endl;
   cout<<endl;
   system ("color 0F");
       int choice;
       cout << "1.Symptoms and Ailment" << endl; //from line 134 //it will just provide medication for different types of diseases
       //cout << "2.Items to be issue" << endl;  
       //cout << "3.Items to be returned" << endl;
       //cout << "4.Display_Patient" << endl;
       cout << "5.Exit Program" << endl;
       cout<<endl;
       cin >> choice;
       try_catch_block(choice);
//let me create functions
switch (choice){
       case 1:       		 
            Problems_Ailment();//line 817  
			break;          
    	/*
       case 2:
            Items_to_Issue(); //line 1152
            break;
       case 3:
            Items_to_Return(); //line 1166
            break;
       case 4:
            Display_Details();//1180
            break;
        */    
       case 5:
            quit(); //exit program   			        
            return 0;
    } //end of switc   
	return 0; 
} //end of int main

void try_catch_block(int x){
	try{
		if(x==1||x==5)
			return;
		else
			throw x;	
	}
	catch(...){
		cout<<"Exception caught!! Enter above numbers only"<<endl;
		cout<<endl;
		main();
	}
}


void quit(){
	system("cls");
	cout<<endl;
	cout<<"Thank you for using..Sairam!! "<<endl;
	cout<<endl;
	return; 
}

class empty{}; //empty class but its size is 1 .. So i want to use that size of empty class 

class Display_diseases/*:public Problem_Types*/{
	int Disp_dis_var;
	public:		
		Display_diseases(){ // For constructor in inheritance , hierarchical inheritance.
			cout<<"Cons:This is Display_diseases class , parent class of Eye , Ear"<<endl<<endl;
			Disp_dis_var=sizeof(empty)-1; //i.e 1-1 =0
		}
		
		virtual void display_priority(){ // For Virtual Functions			
			cout<<"Order for Display_diseases is: "<<Disp_dis_var<<" ,i.e Top Most class(head class)"<<endl<<endl;
		} 
	
		void Display_main();
			
		
		void General_illness(){
			cout<<"1.stomach_ache"<<endl;
			cout<<"2.head_ache"<<endl;
			cout<<"3.body_ache"<<endl;
			cout<<"4.Diorhea"<<endl;
			cout<<"5.vomitings"<<endl;
			cout<<"6.Fever"<<endl;
			cout<<"7.Itching"<<endl;
			cout<<"8.cold"<<endl;
			cout<<"9.cough"<<endl;
			cout<<"10.nausea"<<endl;
			cout<<"11.acidity"<<endl;
			cout<<"12.Gastric"<<endl;
			cout<<endl;
			return;
		}
		
		void Ear(){
			cout<<"1.otitis_externa"<<endl;
			cout<<"2.otitis_media_acute_or_chronic"<<endl;
			cout<<"3.serous_otitis_media"<<endl;
			cout<<"4.infectious_myringitis"<<endl;
			cout<<"5.acute_mastoiditis"<<endl;
			cout<<"6.vestibular_neuronitis"<<endl;							
			cout<<endl;
			return;
		}
		
		void Eye(){
			cout<<"1.Eye_Strain"<<endl;
			cout<<"2.Red_eyes"<<endl;
			cout<<"3.Night_Blindness"<<endl;
			cout<<"4.vision_disorder"<<endl;
			cout<<"5.Eye_irritation"<<endl;
			cout<<"6.conjunctivitis"<<endl;
			cout<<"7.eye_infection_allergy"<<endl;			
			cout<<endl;
			return;
		}
		void Injuries_accidents(){
			cout<<"1.Falling_objects"<<endl;
			cout<<"2.Trips_and_Falls"<<endl;
			cout<<"3.Bruises"<<endl;
			cout<<"4.Sprains"<<endl;
			cout<<"5.Cuts"<<endl;
			cout<<"6.Burns"<<endl;
			cout<<"7.Choking"<<endl;
			cout<<"8.Poisoning"<<endl;
			cout<<"9.Drowning"<<endl;
			cout<<"10.Injuries_in_ground"<<endl;			
			cout<<endl;
			return;
		}
		void Covid_19(){  //yet to be done			
			cout<<"\n!!Infected with COVID-19!!"<<endl;
		} 	
		
		
		//declarations of functions , definitions outside 
	void Stomach_Ache_med(); 
	void head_ache_med();
	void body_ache_med();
	void Diorhea_med();
	void vomitings_med();
	void Fever_med();
	void Itching_med();
	void cold_med();
	void cough_med();
	void nausea_med();
	void acidity_med();
	void Gastric_med();	
};

inline void Display_diseases::Display_main(){  //inline function 
			cout<<"1.General_illness"<<endl;
			cout<<"2.Ear"<<endl;
			cout<<"3.Eye"<<endl;
			cout<<"4.Injuries_accidents"<<endl;
			cout<<"5.Covid_19"<<endl;
			cout<<endl;
			return;
}

void Display_diseases::Stomach_Ache_med(){
	cout<<"Gas-X--->gas in the stomach"<<endl;
	cout<<"Dosage:-- chew 1 or 2 tablets as needed after meals and at bedtime"<<endl;
	cout<<endl;
	cout<<"Pepcid AC,Zantac 75--->stomach ache due to hyperacidity"<<endl;
	cout<<"Dosage:-- take 1 tablet with a glass of water as needed .can be taken with or without food."<<endl;
	cout<<endl;
	cout<<"Dulcolax, Conlax--->severe constipation"<<endl;
	cout<<"Dosage:--One tablet with lukewarm water, to be taken at bedtime."<<endl;
	cout<<endl;
	cout<<"Imodium--->cramping in the stomach due to diarrhoea"<<endl;
	cout<<"Dosage:--2 tablets per day, once in the morning and once in the evening."<<endl;
	cout<<endl;
	cout<<"Kaopectate, Peptobismol--->cramping in the stomach due to diarrhoea"<<endl;
	cout<<"Dosage:--It is taken as a suspension,  60 ml in every 6 hours."<<endl;
	cout<<endl;
	cout<<"Haslab Digesto Syrup,Digene--->Cures stomach ache"<<endl;
	cout<<"Dosage:-- 1 to 2 tablespoonful after meals twice or thrice daily."<<endl;
	cout<<endl;	
}

void Display_diseases::head_ache_med(){
	cout<<"Advil, Motrin--->Excedrin Migraine,"<<endl;
	cout<<"Dosage:-- take 1 tablet with a glass of water as needed,when there is pain "<<endl;
	cout<<endl;
	cout<<"Jandu Balm,Navaratna Cool Cool  --->Pain and mild headache"<<endl;
	cout<<"Dosage:--when there is pain."<<endl;
	cout<<endl;
	cout<<"Use cold bag"<<endl;
	cout<<endl;	
}


void Display_diseases::body_ache_med(){
	cout<<"TYLENOL--->Back Pain,Arthritis Pain"<<endl;
	cout<<"Dosage:-- 1 to 2 tablets,Every 4-6 hours. Minimum dosing interval 4 hours. "<<endl;
	cout<<endl;
	cout<<"CROCIN ADVANCE,,Paracetamol I.P. 500 mg --->.Back Pain,Arthritis Pain"<<endl;
	cout<<"Dosage:--1 to 2 tablets.Maximum dose in 24 hours not to exceed 4g/day in equally divided doses"<<endl;
	cout<<endl;
	cout<<"Use hot bag"<<endl;
	cout<<endl;	
}

void Display_diseases::Diorhea_med(){
	cout<<"Eluxadoline (Viberzi)--->relief from diarrhea and stomach pain"<<endl;
	cout<<"Dosage:-- take twice a day, every day. "<<endl;
	cout<<endl;
	cout<<"Rifaximin (Xifaxan)  --->.pill that you take three times a day for 14 days."<<endl;
	cout<<"Dosage:--2-week course "<<endl;	
	cout<<endl;	
}

void Display_diseases::vomitings_med(){
	cout<<"Pepto-Bismol and Kaopectate --->stop vomiting (antiemetics) "<<endl;
	cout<<"Dosage:--  when there is vomiting sensation"<<endl;
	cout<<endl;	
}

void Display_diseases::Fever_med(){
	cout<<"Acetaminophen or Paracetamol--->helps to reduce fever and to relieve a headache with mild to moderate pain. ..."<<endl;
	cout<<"Dosage:-- take twice a day, after food @least 8 hrs gap. "<<endl;
	cout<<endl;
	cout<<"calpol syrup --->.after food, for younger people,reduce fever"<<endl;
	cout<<"Dosage:--,twice a day "<<endl;	
	cout<<endl;	
}

void Display_diseases::Itching_med(){
	cout<<"Atarax tablet--->relief from Itching"<<endl;
	cout<<"Dosage:-- consume, 1 tablet a day until it reduces. "<<endl;
	cout<<endl;
	cout<<" Benadryl Extra Strength Itch Stopping Gel   --->., Itch Relief Drug class."<<endl;
	cout<<"Dosage:-- apply until it reduces "<<endl;	
	cout<<endl;	
}

void Display_diseases::cold_med(){
	cout<<"ibuprofen, naproxen--->Sinus headache"<<endl;
	cout<<"Dosage:-- 1 or 2 tablets as needed after meals and at bedtime"<<endl;
	cout<<endl;
	cout<<"diphenhydramine--->Runny nose"<<endl;
	cout<<"Dosage:-- take 1 tablet with a glass of water as needed .can be taken with or without food."<<endl;
	cout<<endl;
	cout<<"pseudoephedrine, phenylephrine--->Stuffy nose"<<endl;
	cout<<"Dosage:--One tablet with lukewarm water, to be taken at bedtime."<<endl;
	cout<<endl;
	cout<<"ibuprofen, naproxen, acetaminophen--->Fever and aches"<<endl;
	cout<<"Dosage:--2 tablets per day, once in the morning and once in the evening."<<endl;
	cout<<endl;
	cout<<"dextromethorphan-->Sore throat and coughing"<<endl;
	cout<<"Dosage:--One tablet with lukewarm water ."<<endl;
	cout<<endl;
	cout<<"acetaminophen--->For children"<<endl;
	cout<<"Dosage:--take 1 tablet with a glass of water as needed after meals ."<<endl;
	cout<<endl;	
}


void Display_diseases::cough_med(){
	cout<<"COREX,CHERICOF,Benadryl-->Dry Coughs"<<endl;
	cout<<"Dosage:-- 3 days course morning and evening after food"<<endl;
	cout<<endl;
	cout<<"Asthalin--->Ashamatic cough"<<endl;
	cout<<"Dosage:-- 3 days course morning and evening after food."<<endl;
	cout<<endl;
	cout<<"Ascoril--->Brochilidator"<<endl;
	cout<<"Dosage:--3 days course morning and evening after food with lukewarm water, to be taken at bedtime."<<endl;
	cout<<endl;
	cout<<"Koflet,Honeytus--->All cough"<<endl;
	cout<<"Dosage:--3 days course morning and evening after food ."<<endl;
	cout<<endl;	
} 

void Display_diseases::nausea_med(){
	cout<<"Buscopan 10mg--->Cures motion sickness"<<endl;
	cout<<"Dosage:-- 0.2 – 0.4mg per day orally"<<endl;
	cout<<endl;
	cout<<"Dicylomine--->Cure’s morning sickness and motion sickness"<<endl;
	cout<<"Dosage:-- 10 – 20mg per day, orally.."<<endl;
	cout<<endl;
	cout<<"Phenergan 25mg--->Prevents vomiting"<<endl;
	cout<<"Dosage:--6.25 to 12.5 mg per day, before meals.."<<endl;
	cout<<endl;
	cout<<"Kaopectate, Pepto-Bismol--->Cure’s vomiting due to the upset stomach"<<endl;
	cout<<"Dosage:--.25 to 12.5 mg per day, before meals.."<<endl;
	cout<<endl;
	cout<<"Meclizine-->Cure’s seasickness and motion sickness"<<endl;
	cout<<"Dosage:--.25 to 12.5 mg per day, before meals with lukewarm water ."<<endl;
	cout<<endl;	
}

void Display_diseases::acidity_med(){
	cout<<"Eno Powder Lemon. bottle of 100 gm Powder-->acidity"<<endl;
	cout<<"Dosage:-- chew 1 or 2 tablets when there is acidity "<<endl;
	cout<<endl;
	cout<<"Digene Acidity & Gas Relief Gel Mint--->acidity"<<endl;
	cout<<"Dosage:-- chew 1 or 2 tablets when there is acidity."<<endl;
	cout<<endl;
	cout<<"Gelusil MPS Original Liquid Sugar Free Mint.--->acidity"<<endl;
	cout<<"Dosage:--chew 1 or 2 tablets when there is acidity, liquid/syrup 1-2 spoons."<<endl;
	cout<<endl;
	cout<<"Maharishi Amlant Tablet.--->acidity"<<endl;
	cout<<"Dosage:--chew 1 or 2 tablets when there is acidity."<<endl;
	cout<<endl;	
} 

void Display_diseases::Gastric_med(){
	cout<<"Pantoprazole Tablet IP,Domperidone-->Stomach and Esophagus problems"<<endl;
	cout<<"Dosage:-- 1 or 2 tablets when there is Gastritis "<<endl;
	cout<<endl;
	cout<<"Digene Acidity & Gas Relief Gel Mint--->acidity,Gastritis"<<endl;
	cout<<"Dosage:-- 1 or 2 tablets when there is Gastritis."<<endl;
	cout<<endl;
	cout<<"Dr. Stop.--->Gastritis"<<endl;
	cout<<"Dosage:--1 or 2 tablets when there is Gastritis."<<endl;
	cout<<endl;
	cout<<"Amotrin.---> Analgesics and pain relief medicines, Brain and nervous system medicines, Digestive system medicines"<<endl;
	cout<<"Dosage:-1 or 2 tablets when there is Gastritis"<<endl;
	cout<<endl;	
}

class general_illness{	
	public:		
		
		void stomach_ache(){ //;
			Display_diseases obj;
			cout<<"Problem: *Stomach_ache* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.Stomach_Ache_med();	
			cout<<"Diet/if any:--Healthy light food,Less oil and spices,"<<endl;
			cout<<endl;
			return;
		}
		void head_ache(){//;
			Display_diseases obj;
			cout<<"Problem: *head_ache* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.head_ache_med();
			
			cout<<"Diet/if any:--Normal diet"<<endl;
			cout<<endl;
			return;
		}
		void body_ache(){//;
			Display_diseases obj;
			cout<<"Problem: *body_ache* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.body_ache_med();
			
			cout<<"Diet/if any:--Normal diet"<<endl;
			cout<<endl; 
			return;
		}
		void Diorhea(){ //;
			Display_diseases obj;
			cout<<"Problem: *Diorhea* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.Diorhea_med();
			cout<<endl;
			cout<<"Diet/if any:--hot cereals, such as oatmeal,plain white rice,boiled potatoes,bread or toast"<<endl;
			cout<<endl;
			return;
		}
		void vomitings(){ //;
			Display_diseases obj;
			cout<<"Problem: *vomitings* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			obj.vomitings_med();
			cout<<endl;					
			cout<<"Diet/if any:-- Try foods such as bananas, rice, applesauce, dry toast::!!!avoid   alcohol, caffeine, fats/oils, spicy food, milk or cheese."<<endl;
			cout<<endl;
			return;
		}
		void Fever(){ //;
			Display_diseases obj;
			cout<<"Problem: *Fever* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.Fever_med();
			cout<<endl;
			cout<<"Diet/if any:--soup,protein,Vegetables.,Fruits,Greek Yogurt,Coconut Water"<<endl;
			cout<<endl;
			return;
		}
		void Itching(){ //;
			Display_diseases obj;
			cout<<"Problem: *Itching* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.Itching_med();
			cout<<"Diet/if any:--Normal diet"<<endl;
			cout<<endl;
			return;
		}
		void cold(){ //;
			Display_diseases obj;
			cout<<"Problem: *cold* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.cold_med();
			cout<<"Diet/if any:--Soup,Ginger tea, coffee,Coconut Water,Garlic,Hot Tea... Avoid curd and cold items.."<<endl;
			cout<<endl;
			return;
		}
		void cough(){ //;
			Display_diseases obj;
			cout<<"Problem: *cough* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			obj.cough_med();
			cout<<endl;
			cout<<"Diet/if any:--Soup,Ginger tea, coffee,Coconut Water,Garlic,Hot Tea... Avoid curd and cold items."<<endl;
			cout<<endl;
			return;
		}
		void nausea(){//;
			Display_diseases obj;
			cout<<"Problem: *nausea* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.nausea_med();
			cout<<"Diet/if any:-- crackers, toast, dry cereals, or bread sticks,Eat cool foods instead of hot, spicy foods. non-fat yogurt, fruit juice, sherbet, and sports drinks"<<endl;
			cout<<endl;
			return;
		}
		void acidity(){ //;
			Display_diseases obj;
			cout<<"Problem: *acidity* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.acidity_med();
			cout<<"Diet/if any:--Vegetables,Ginger,Oatmeal,Noncitrus fruits,Healthy fats.."<<endl;
			cout<<endl;
			return;
		}
		void Gastric(){ //;
			Display_diseases obj;
			cout<<"Problem: *Gastric* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			obj.Gastric_med();
			cout<<"Diet/if any:--whole grains, fruits, vegetables, and beans,non-carbonated drinks,caffeine-free drinks,high-fiber foods etc.."<<endl;
			cout<<endl;
			return;
		}
	
	
}; // end of class General_illness 


class Ear:virtual public Display_diseases{
	int Ear_var;
	public:
		
		Ear(){ //for constructors in inheritance , Default constructor
			cout<<"Cons:This is Ear class , derived class of Display_diseases"<<endl<<endl;
			Ear_var=2;
		}
		
		void display_priority(){ //virtual functions
			cout<<"Order for Ear is: "<<Ear_var<<" ,i.e 2nd Top Most class"<<endl<<endl;
		}		
		
		void otitis_externa(){	
			cout<<"Problem: *otitis_externa* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Zenflox Eye Ear Drop,Nuflucon Ear Drop"<<endl;
			cout<<"Consultation of ENT specialist required!!"<<endl;
			cout<<endl;			
			cout<<"Duration:--1 -2 weeks , 2 drops"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;	
			cout<<endl;
			return;
		}		
		void otitis_media_acute_or_chronic(){
			cout<<"Problem: *otitis_media_acute_or_chronic* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<":--Amoxicillin at a dosage of 80 to 90 mg per kg per day should be the first-line antibiotic "<<endl;
			cout<<"who fail to respond to the initial treatment option within 48 to 72 hours should be reassessed to confirm the diagnosis "<<endl;
			cout<<"Consultation of ENT specialist required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:---Normal Diet"<<endl;			
			cout<<endl;
			return;
		}
		void serious_otitis_media(){	
			cout<<"Problem: *serious_otitis_media* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"antibiotics ofloxacin (Floxin Otic and generic) or the more pricey combination drug ciprofloxacin-dexamethasone (Ciprodex)."<<endl;
			cout<<"Consultation of ENT specialist required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}
		void infectious_myringitis(){	
			cout<<"Problem: *infectious_myringitis* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"antibiotics--Symptoms usually improve within two days."<<endl;
			cout<<"Consultation of ENT specialist required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:---Normal Diet"<<endl;		
			cout<<endl;
			return;
		}
		void acute_mastoiditis(){		
			cout<<"Problem: *acute_mastoiditis* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"initial therapy of intravenous vancomycin and ceftriaxone"<<endl;
			cout<<"Consultation of ENT specialist required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet-"<<endl;	
			cout<<endl;
			return;
		}
		void vestibular_neuronitis(){	
			cout<<"Problem: *vestibular_neuronitis* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"meclizine (Antivert®), diazepam (valium)"<<endl;
			cout<<"Consultation of ENT specialist required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet-"<<endl;		
			cout<<endl;
			return;
		}
		

}; //end of class ear
//======For unary operator overloadin
//global function


class Eye:public Display_diseases{
	int Eye_var;
	public:
		Eye(){ //for constructors in inheritance , Default constructor
			cout<<"Cons:This is Eye class , derived class of Display_diseases"<<endl<<endl;
			Eye_var=3;
			
		}
		
		void display_priority(){ //virtual functions
			cout<<"Order for Eye is: "<<Eye_var<<" ,i.e 2nd Top Most class"<<endl<<endl;
		}		
		
		
		void Eye_Strain(){	
			cout<<"Problem: *Eye_Strain* "<<endl;
			cout<<endl;
			cout<<"--:ReMeDy:--"<<endl;
			cout<<endl;
			cout<<"Blink often to refresh your eyes,Take eye breaks.Check the lighting and reduce glare,eye Exercises"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}
				
		void Red_eyes(){	
			cout<<"Problem: *Red_eyes* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Naphazoline, which is found in drugs such as Clear Eyes Itchy Eye Relief."<<endl;
			cout<<"Opcon-A Itching and Redness Reliever Eye Drops."<<endl;
			cout<<"Alaway Antihistamine Eye Drops"<<endl;
			cout<<"Dosage:-3-4 drops"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}
				
		void Night_Blindness(){	
			cout<<"Problem: *Night_Blindness* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of osteopathic doctor required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}	
			
		void vision_disorder(){	
			cout<<"Problem: *vision_disorder* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of osteopathic doctor required!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}
		
		void Eye_irritation(){	
			cout<<"Problem: *Eye_irritation* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Alaway Antihistamine Eye Drops"<<endl;
			cout<<"Dosage:-3-4 drops"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}		
		
		
		void conjunctivitis(){	
			cout<<"Problem: *conjunctivitis(PINK EYE)* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of osteopathic doctor required!!: Use Dark(black) Spectacles"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}
		
		void eye_infection_allergy(){	
			cout<<"Problem: *eye_infection_allergy* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Bleph,Moxeza,Zymar--ophthalmic antibiotic eyedrops "<<endl;
			cout<<endl;
			cout<<"Diet/if any:--Normal Diet"<<endl;		
			cout<<endl;
			return;
		}		
}; //end of class eye


class Injuries_accidents{	 
	public:	
		
		void Falling_objects(){
			cout<<"Problem: *Falling_objects* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of doctor required!!"<<endl;
			cout<<"PHYSICAL THERAPY."<<endl;			
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT."<<endl;
			cout<<endl;
			return;
		}
		void Trips_and_Falls(){
			cout<<"Problem: *Trips_and_Falls* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of doctor required!!"<<endl;
			cout<<"PHYSICAL THERAPY."<<endl;
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT."<<endl;
			cout<<endl;
			return;
		}
		void Bruises(){
			cout<<"Problem: *Bruises* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Arnica montana, or arnica-Apply over bruises"<<endl;
			cout<<"Ointments - Burnol, Boroline, Bengay"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT"<<endl;
			cout<<endl; 
			return;
		}
		void Sprains(){
			cout<<"Problem: *Sprains* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Ice Bag,Advil, Motrin:-Consultation of doctor!!"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT"<<endl;
			cout<<endl;
			return;
		}
		void Cuts(){
			cout<<"Problem: *Cuts* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Iodosorb Gel for Open Wounds."<<endl;
			cout<<"Medihoney Gel  for Open Wounds."<<endl;
			cout<<"B&W Ointment for Open Wounds."<<endl;
			cout<<"Traumeel Wound Healing Ointment for Swelling"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT"<<endl;
			cout<<endl;
			return;
		}
		void Burns(){
			cout<<"Problem: *Burns* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Burnol Cream,Boroline Cream"<<endl;
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT"<<endl;
			cout<<endl;
			return;
		}
		void Choking(){
			cout<<"Problem: *Choking* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of doctor--Ambulance 108!!"<<endl;
			cout<<endl;
			cout<<"STEPS TO FOLLOW::-"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Step 1:Lower the person to the floor"<<endl;
			cout<<"Step 2:Begin CPR. Chest compressions may help dislodge the object"<<endl;
			cout<<"Step 3:If you see something blocking the airway and it is loose, try to remove it. If the object is lodged in the person's throat, DO NOT try to grasp it"<<endl;
			cout<<endl;
			cout<<"After/Getting Normal:--Drink water to try moving it down"<<endl;
			cout<<endl;
			return;
		}
		void Poisoning(){
			cout<<"Problem: *Poisoning* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of doctor--Ambulance 108!!"<<endl;
			cout<<"Temporary::Drink lots of water and Puke out "<<endl;
			cout<<endl;
			cout<<"Controlled diet for 2-3 weeks after recovery,,consumption for more fluids ."<<endl;
			cout<<endl;
			return;
		}
		void Drowning(){
			cout<<"Problem: *Drowning* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Consultation of doctor--Ambulance 108!!"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"STEPS TO FOLLOW::-"<<endl;
			cout<<endl;
			cout<<"Step 1:Try to wake the casualty"<<endl;
			cout<<"Step 2:Lie them on their back and tilt their chin and head backwards to help clear their airway."<<endl;
			cout<<"Step 3:Give them 5 rescue breaths."<<endl;
			cout<<"Step 4:CPR.."<<endl;
			cout<<"Step 5:If you are on your own, then once you've done 5 rescue breaths and one minute of CPR you can take the time to call the emergency services."<<endl;			
			cout<<endl;		
			cout<<endl;
			return;
		}
		void Injuries_in_ground(){
			cout<<"Problem: *Injuries_in_ground* "<<endl;
			cout<<endl;
			cout<<"--:Medication:--"<<endl;
			cout<<endl;
			cout<<"Serious Injury_ Consultation of doctor"<<endl;
			cout<<endl;
			cout<<"Else, Volini Spray, Bengay ointment, boroline,burnol, pain relief spray -Apply over injuries"<<endl;			
			cout<<endl;
			cout<<"Diet/if any:--GET PLENTY OF SLEEP AND EAT RIGHT"<<endl;
			cout<<endl;
			return;
		}
	
}; //end of class  Injuries_accidents

class Covid_19:private general_illness{ // Single inheritance
	protected:
		static float recovery_rate;
		void covid_19(){
			
			cout<<"For Covid-19"<<endl;
			cout<<endl;
			cout<<"--:Steps to be followed by patient:--"<<endl;
			cout<<endl;
			cout<<"Step 1:  Isolation"<<endl;
			cout<<"Step 2:  wear a medical mask to avoid infecting others"<<endl;
			cout<<"Step 3: have a fever, cough and difficulty breathing, seek medical attention immediately"<<endl;
			cout<<endl;
			cout<<":::Instructions for home person::::"<<endl;
			cout<<"Step 1: Stay in a well-ventilated single-room preferably with an attached/separate toilet."<<endl;
			cout<<"Step 2: Under no circumstances attend any social/religious gathering e.g. wedding, condolences, etc."<<endl;
			cout<<"Step 3: Restrict his/her movement within the room"<<endl;
			cout<<endl;
			cout<<":::Imunity boosting ::::"<<endl;
			cout<<endl;
			cout<<"Ginger,Kada,Saffron Milk,Garlic,Tulsi leaves,star anise (a spice),Turmeric,Yogurt are nautral immunity boosters"<<endl;
			cout<<endl;
			cout<<"Dont Lose Hope!!"<<endl;
			cout<<endl;
			return;
		}
	friend void  Problems_Ailment();
	public:
	Covid_19(){ //default constructor
		cout<<"Covid_19 !!"<<endl<<endl;
	}
	Covid_19(float value){ //parameterised constructor
		recovery_rate=value;
		cout<<"Covid_19!! Indias recovery rate: "<<value<<endl<<endl;
	}
	
};
float Covid_19::recovery_rate=65.3; //static variable initiaisation
//==============================================
//for sake of composition and aggregation
class A{
	float a;
	public:
		A(float m){  //parameterised constructor
			this->a=m;			
		}
		~A(){
			cout<<"Destructing class A object"<<endl<<endl;
		}
}; // end of class A

class B{
	public:
		B(){  //default constructor
			cout<<"Constructing class B  object"<<endl<<endl;			
		}
		~B(){
			cout<<"Destructing class B object"<<endl<<endl;
		}
};  //end of class B

//===============================================
//for sake of multiple inHeritance , Hybrid, multi-level a new class is delcared

class Serious:public Covid_19, public Display_diseases{
	private:
		float temperature;
		A* aptr; //pointer of class A capable of Holdin address of object of class A
		B composition; //composition object of class B 
	public:
		Serious(){  //default constructor
			cout<<"Constructing class Serious object"<<endl<<endl;			
		}
		
		Serious(int l){  //parameterised constructor
			cout<<"initialisin temperature to Normal('F(farenite)):98.6"<<endl<<endl;
			temperature=l;			
		}
		
		~Serious(){
			cout<<"Destructing class Serious object"<<endl<<endl;;
		}	
		
		void Aggregation(){
			float key=0.0;
			cout<<"Enter temperature of Patient"<<endl<<endl;
			cin>>key;
			aptr = new A(key);
			delete aptr;  
			temperature =key;
		}			
				
}cons_global(98.6); //multiple  , Hybrid, multi-level inHeritance is seen


//advanced declaration

class times{
	public:
		void how_many_times_1();
		void how_many_times_2();
		void how_many_times_3();
		void how_many_times_4();		
};

void  Problems_Ailment(){
	system ("cls");
	cout<<"What kind of Problems you have?"<<endl;
	cout<<endl;
	Display_diseases object;
	Display_diseases* Fptr =new Display_diseases();
	object.Display_main(); //it displays all types of diseases
	times object1;
	cout<<endl;
	cout<<":::Select your Problem Type:::"<<endl;
	int type;
	cin>>type;
	system ("cls");
	char back_main;
	//displays types
	if(type==1){
		 object.General_illness();
		 cout<<endl;
		 object1.how_many_times_1();
		 cout<<endl;		 
		 cout<<"To Go back to main enter 'm'...  "<<endl;
		 cin>>back_main;
		 if(back_main=='m'){
		 	system ("cls");
		 	main();
		 }		 
		 			 	 
	}
	if(type==2){
		 //object.Ear();
		 Fptr->Ear();
		 cout<<endl;
		 object1.how_many_times_2();
		 cout<<endl;
		 cout<<"To Go back to main enter 'm'...  "<<endl;
		 cin>>back_main;
		 if(back_main=='m'){
		 	system ("cls");
		 	main();
		 }		 
	}
	if(type==3){
		 //object.Eye();
		 Fptr->Eye();	
		 cout<<endl;
		 object1.how_many_times_3();
		 cout<<endl;
		 cout<<"To Go back to main enter 'm'...  "<<endl;
		 cin>>back_main;
		 if(back_main=='m'){
		 	system ("cls");
		 	main();
		 }		 
		 	
	}
	if(type==4){
		 object.Injuries_accidents();		 
		 cout<<endl;
		 object1.how_many_times_4();
		 cout<<endl;
		 cout<<"To Go back to main enter 'm'...  "<<endl;
		 cin>>back_main;
		 if(back_main=='m'){
		 	system ("cls");
		 	main();
			}		 
	}	
	if(type==5){ 
		 //object.Covid_19();
		 Fptr->Covid_19();		 
		 cout<<endl;	
		 Serious k; //for composition and aggregation
		 k.Aggregation();
		 cout<<endl<<endl;
		 Covid_19 objecto; //object for class Covid - 19 
		 cout<<endl;
		 objecto.covid_19();
		 cout<<endl<<endl;
		 cout<<"Want to Update Indias Covid-19 Recovery rate Enter:- Y, if not enter other letter"<<endl<<endl;
		 cin>>back_main;
		 try{
		 	if(back_main=='Y'){
		 		float enter;
		 		cout<<"Please enter rate of recovery:-"<<endl;
		 		cin>>enter;
		 		Covid_19 For_Sake_Of_Concept(enter); //callin parameterised constructor
			 }			 
			 else 
			 	throw(back_main);	
		 }
		 catch(char m){
		 	cout<<"Exception Caught, Last updated recovery rate is: "<<objecto.recovery_rate<<endl<<endl;		 	
		 }
		 cout<<"To Go back to main enter 'm'...  "<<endl;
		 cin>>back_main;
		 if(back_main=='m'){
		 	system ("cls");
		 	main();
		   }		 
	}
	
	
}



void times::how_many_times_1(){
	int i=0;
	cout<<endl;
	cout<<"::How many General_illness problems/diseases are you facing?::"<<endl;
	int number;
	cin>>number;
	cout<<endl;
	int sym=0;
	int arr[number]; //Dynamic creation of array for storin symptom codes
	cout<<"please. .Tell ur symptoms"<<endl;
	cout<<endl;
	while(i<number){
		cout<<"Mention your symptom "<<i+1<<" :"<<endl;
		cin>>arr[i];
		i++;
	}// symptoms stored
	cout<<endl;	
	i=0;
	general_illness object1; //for use of general_illness stuff , and callin its functions		
	while(i<number){
			
		switch (arr[i]){
			case 1:
				object1.stomach_ache();
				break;
			case 2:
				object1.head_ache();
				break;
			case 3:
				object1.body_ache();
				break;
			case 4:
				object1.Diorhea();
				break;
			case 5:
				object1.vomitings();
				break;
			case 6:
				object1.Fever();
				break;
			case 7:
				object1.Itching();
				break;
			case 8:
				object1.cold();
				break;
			case 9:
				object1.cough();
				break;
			case 10:
				object1.nausea();
				break;
			case 11:
				object1.acidity();
				break;
			case 12:
				object1.Gastric();
				break;
							
		} //end of 	switch
		i++;	
	}//end of while
	return;
}//end of fnction

//advanced declaration for unary operator overloadin
void func_unary();

void times::how_many_times_2(){
	int i=0;
	cout<<endl;
	cout<<"::How many Ear problems/diseases are you facing?::"<<endl;
	int number;
	cin>>number;
	cout<<endl;
	int sym=0;
	int arr[number]; //Dynamic creation of array for storin symptom codes
	cout<<"please. .Tell ur symptoms"<<endl;
	cout<<endl;
	while(i<number){
		cout<<"Mention your symptom "<<i+1<<" :"<<endl;
		cin>>arr[i];
		i++;
	}// symptoms stored
	cout<<endl;	
	i=0;
	Ear object2; //for use of Ear stuff , and callin its functions
	cout<<endl<<endl;
	//Diamond problem.
	//========================================
	int choice;
	cout<<"Do You Want to increment count of Physically_Disabled"<<endl<<endl;
	cout<<"Yes-Enter 1,,,No-Enter any number to continue"<<endl;
	cin>>choice;
	while(1){	 //infinite loop
		if(choice==1){		
			func_unary();
			break;
		}			
		else
			break;
	}
	//========================================
	//Virtual Functions
	Display_diseases *ptr1, base; //declaration of object of base class in its derived class
	ptr1 =&base;
	ptr1->display_priority();
	cout<<endl;
	ptr1 =&object2;
	ptr1->display_priority();
	cout<<endl;
	while(i<number){
			
		switch (arr[i]){
			case 1:
				object2.otitis_externa();
				break;
			case 2:
				object2.otitis_media_acute_or_chronic();
				break;
			case 3:
				object2.serious_otitis_media();
				break;
			case 4:
				object2.infectious_myringitis();
				break;
			case 5:
				object2.acute_mastoiditis();
				break;
			case 6:
				object2.vestibular_neuronitis();
				break;	
							
		}//end of switch
		i++;
	}// end of while
	return;
}//end of function 

//advanced declaration for binary operator overloadin
void func_binary();


void times::how_many_times_3(){
	int i=0;
	cout<<endl;
	cout<<"::How many Eye problems/diseases are you facing?::"<<endl;
	int number;
	cin>>number;
	cout<<endl;
	int sym=0;
	int arr[number]; //Dynamic creation of array for storin symptom codes
	cout<<"please. .Tell ur symptoms"<<endl;
	cout<<endl;
	while(i<number){
		cout<<"Mention your symptom "<<i+1<<" :"<<endl;
		cin>>arr[i];
		i++;
	}// symptoms stored
	cout<<endl;	
	i=0;
	Eye object3; //for use of Eye stuff , and callin its functions
	cout<<endl<<endl;
	//========================================
	int choice;
	cout<<"Do You Want to know Total Eye victims and Ear Victims"<<endl<<endl;
	cout<<"Yes-Enter 1,,,No-Enter any number to continue"<<endl;
	cin>>choice;
	while(1){	 //infinite loop
		if(choice==1){		
			func_binary();			
			break;
		}			
		else
			break;
	}
	//========================================
	//Virtual Functions
	Display_diseases *ptr1, base; //declaration of object of base class in its derived class
	ptr1 =&base;
	ptr1->display_priority();
	cout<<endl;
	ptr1 =&object3;
	ptr1->display_priority();
	cout<<endl;
	while(i<number){
			
		switch (arr[i]){
			case 1:
				object3.Eye_Strain();
				break;
			case 2:
				object3.Red_eyes();
				break;
			case 3:
				object3.Night_Blindness();
				break;
			case 4:
				object3.vision_disorder();
				break;
			case 5:
				object3.Eye_irritation();
				break;
			case 6:
				object3.conjunctivitis();
				break;	
			case 7:
				object3.eye_infection_allergy();
				break;
				
					
		}//end of switch
		i++;
	}// end of while
	return;
}//end of function 

//advanced declaration for sake of pure virtual function
void pure_virtual();

void times::how_many_times_4(){
	int i=0;
	cout<<endl;
	cout<<"::How many Injuries_accidents problems/diseases are you facing?::"<<endl;
	int number;
	cin>>number;
	cout<<endl;
	int sym=0;
	int arr[number]; //Dynamic creation of array for storin symptom codes
	cout<<"please. .Tell ur symptoms"<<endl;
	cout<<endl;
	while(i<number){
		cout<<"Mention your symptom "<<i+1<<" :"<<endl;
		cin>>arr[i];
		i++;
	}// symptoms stored
	cout<<endl;	
	i=0;
	Injuries_accidents object4; //for use of Injuries_accidents , and callin its functions
	cout<<"Displayin Injuries count recorded in(hexa-decimal, decimal, octa-decimal) formats  "<<endl;
	pure_virtual();	//pure virtual functions
	while(i<number){
			
		switch (arr[i]){
			case 1:
				object4.Falling_objects();
				break;
			case 2:
				object4.Trips_and_Falls();
				break;
			case 3:
				object4.Bruises();
				break;
			case 4:
				object4.Sprains();
				break;
			case 5:
				object4.Cuts();
				break;
			case 6:
				object4.Burns();
				break;
			case 7:
				object4.Choking();
				break;
			case 8:
				object4.Poisoning();
				break;
			case 9:
				object4.Drowning();
				break;
			case 10:
				object4.Injuries_in_ground();
				break;
			
				
		}// end of switch
		i++;
	}// end of while
	return;
}//end of function

//try for unary operator overloadin, diamond problem
class Physically_Disabled:public Eye,public Ear{
	protected:
		int val;
		
	public:
		Physically_Disabled(int m){
			this->val=m;
		}	
		
		void operator+(){
			val++;
			cout<<"Physically_Disabled count after increment is:"<<val<<endl<<endl;
		}
};

void func_unary(){ //unary operator overloadin function definition
	int number;
	cout<<"Enter Physically_Disabled count!"<<endl;
	cin>>number;
	Physically_Disabled victims(number); 
	+victims;
	return;
}

//for binary operator overloadin

class Eye_Ear_victims{			
	public:
		int val;
		
		Eye_Ear_victims(){ //default constructor
			this->val=0;
		}		
		
		Eye_Ear_victims(int m){ //parameterised constructor
			this->val=m;			
		}				
		
		Eye_Ear_victims operator+(Eye_Ear_victims &O2){
			Eye_Ear_victims Tot;
			
			Tot.val=this->val+O2.val;
			return Tot;
		}
};

void func_binary(){	
	int number1,number2;
	cout<<"Enter Eye_victim count!"<<endl;
	cin>>number1;
	cout<<"Enter Ear_victim count!"<<endl;
	cin>>number2;
	//objects declaration and  initialisation usin parameterised constructor 
	Eye_Ear_victims O1(number1);
	Eye_Ear_victims O2(number2);
	Eye_Ear_victims Tot;
	Tot=O1+O2; //binary operator overloadin
	cout<<"Total Eye_Ear_victims count is:"<<Tot.val<<endl<<endl;
	return;
}

//for sake of pure virtual functions

class number{
	protected:
		int val;
	public:
		void setval(int i){
			val=i;
		}	
		virtual void display()=0; //pure virtual function only declared 
};

class hextype: public number{
	public:
		void display(){
			cout<<"Last Year:Total Injuries_accidents count(in hexadecimal type) is:"<< hex << val <<endl;
		}
};

class dectype: public number{
	public:
		void display(){
			cout<<"Last Year:Total Injuries_accidents count(in decimal type) is:"<< val <<endl;
		}
};

class octtype: public number{
	public:
		void display(){
			cout<<"Last Year:Total Injuries_accidents count(in octadecimal type) is:"<< oct << val <<endl;
		}
};

void pure_virtual(){
	hextype p;
	dectype q;
	octtype r;
	q.setval(56);
	q.display();
	p.setval(56);
	p.display();	
	r.setval(56);
	r.display();
	cout<<endl;
	return;	
}










