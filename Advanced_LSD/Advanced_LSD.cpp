
/***************************************************
Advanced_LSD.cpp

****************************************************/

/** Declarations **/
std::string AdvLSD_FakeVar_Label(object *callee, const std::string& lab2);
double AdvLSD_FakeVar(object *callee, const std::string& lab2);

/***********/

//connect the callee label with a given string.
std::string AdvLSD_FakeVar_Label(object *callee, const std::string& lab2){
  if(true){
    if (callee==NULL){
      PLOG("\nAdvanced_LSD.cpp      ERROR in AdvLSD_FakeVar_Label(): pointer is NULL");
      return NULL;
    }
  }
    try{
      return std::string(std::string(callee->label)+lab2);
    }
    catch (...){
        return "noLabelForCallee + lab?";
    }
//   return std::string(std::string(callee->label)+lab2);
}

double AdvLSD_FakeVar(object *callee, const std::string& lab2){
  return VS(callee,AdvLSD_FakeVar_Label(callee,lab2).c_str());
}
