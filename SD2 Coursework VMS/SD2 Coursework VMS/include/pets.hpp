using namespace std;


class pets_management {
public:
	void pets_details();


void pets_details() {

	string pet_name;
	string pet_type;
	string pet_breed;
	int pet_age;
	bool pet_vaccinated;
	string medical_history;
	string appointment_history;


	cout << "Enter the pet's name: ";
	cin >> pet_name;
	cout << "Enter the pet's typ (Male or Female)
	cin >> pet_type;
	cout << "Enter the pet's breed: ";
	cin >> pet_breed;
	cout << "Enter the pet's age: ";
	cin >> pet_age;
	cout << "Is the pet vaccinated? (Y for yes, N for no):"
		
		// if statement to check if the pet is vaccinated

		if (pet_vaccinated == 'Y') {
			cout << "The pet is vaccinated." << endl;
		}
		else if (pet_vaccinated == 'N')		{
			cout << "The pet is not vaccinated." << endl;
		}
		else {
			cout << "Invalid input. Please enter Y or N." << endl;

		}
	cout << "Enter the pet's medical history: ";
	
	// if statement to check if the pet has a medical history.
	if (medical_history == 'Y') {
		cout << "Enter the pet's medical history: ";
		cin >> medical_history;

	}
	else if (medical_history == 'N') {
		cout << "The pet does not have a medical history." << endl;
	}
	else {
		cout << "Invalid input. Please enter Y or N." << endl;
	}
}

void pets_appointment() {
	string appointment_date;
	string appointment_time;
	string appointment_reason;
	string appointment_vet;
	string appointment_notes;


	// regex to check the date format

	regex date_pattern(R"(\d{2}/\d{2}/\d{4})");

	cout << "Enter the appointment date(DD/MM/YY): ";
	cin >> appointment_date;

	if (regex_match (appointment_date ,date_pattern)) {
		ignore.cout << "The date is valid." << endl;
	}	

	else {
		cout << "Invalid date format. Please enter the date in the format DD/MM/YY." << endl;
	}

	// regex to check the time format

	regex time_pattern(R"(\d{2}:\d{2})");
	cin >> appoointment_date;

	if (regex_match(appointment_time, time_pattern)) {
		ignore.cout "The time is valid." << endl;

	}
	else {
		cout << "Invalid time format. Please enter the time in the format HH:MM." << endl;
	}


	cout << "Enter the reason for the appointment: ";
	cin >> appointment_reason;
	cout << "Enter the vet's name: ";
	cin >> appointment_vet;
	cout << "Enter any notes for the appointment: ";
	cin >> appointment_notes;
};



