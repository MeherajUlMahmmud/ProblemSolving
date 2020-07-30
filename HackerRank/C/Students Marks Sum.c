

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int result = 0;
    if(gender == 'b'){
        for(int i = 0; i < number_of_students; i+=2){
            result += marks[i];
        }
        return result;
    }
    else{
        for(int i = 1; i < number_of_students; i+=2){
            result += marks[i];
        }
        return result;
    }
}
