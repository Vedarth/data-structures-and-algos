int main(void)
{ /** updated      **/
std::cout << "Enter the link lengths in descending order from longest to shortest. Units are meters." << std::endl;
double s1,s2,s3,s4;
std::cin >> s1;
std::cin >> s2;
std::cin >> s3;
std::cin >> s4;
std::cout << "You entered s1:" << s1 << " s2:"< Linkage link(s1,s2,s3,s4);
std::cout << "Enter in a NEW longest length" << std::endl;
double newLongest;
std::cin >> newLongest;

//pass the new longest to the set method!!
link.setLongest(newLongest);

std::cout << "In main: calling getLongest on the link object: " << link.getLongest() << std::endl;
std::cout << "In main: calling getShortest on the link object: " << link.getShortest() << std::endl;
std::cout << "In main: calling getP on the link object: "<< link.getP() << std::endl;
std::cout << "In main: calling getQ on the link object: "<< link.getQ() << std::endl;
std::cout << link.Motion() << std::endl << std::endl;

Linkage newLink(50, 40, 30, 20);          /** updated        **/
std::cout << "Creating a new linkage with L,P,Q,S as 50,40,30,20" << std::endl;
std::cout << "Calling Motion() expecting a change-point linkage" << std::endl;
std::cout << newLink.Motion() << std::endl << std::endl;

/** updated      **/
std::cout << "Shortening longest to 45, creating a crank rocker linkage" << std::endl;
newLink.setLongest(45);
std::cout << "Calling Motion() expecting a crank Rocker linkage" << std::endl;
std::cout << newLink.Motion() << std::endl << std::endl;

/** updated      **/
std::cout << "Lengthening shortest to 26, creating a triple rocker linkage" << std::endl;
newLink.setShortest(26);
std::cout << "Calling Motion() expecting a triple rocker linkage" << std::endl;
std::cout << newLink.Motion() << std::endl;


return 0;
}