Student(Student &obj) // deep copy constructor , which can give you new memory in heep of dynamic allocation , if you change one value but not affect to other value
  // {
  //   this->name = obj.name;
  //   rollNoPtr = new int((*obj.rollNoPtr)); // new memory allocation and set value of other object value
  // }