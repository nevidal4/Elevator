//	elevatr3.cpp			overloading	constructors
#include	<iostream>
#define		FLOORS	10
using	namespace	std;
class	elevator {
private:
	int	floorSelected;
	int	floorNumber;
public:
	elevator();
	elevator(int	selected, int	number);
	void elevator::print(bool printSelected, bool printNumber);
	void	selectFloor(int	floor);
	void	go();
};
elevator::elevator() {
	floorSelected = 0;
	floorNumber = 0;
}
elevator::elevator(int	selected, int	number) {
	floorSelected = selected;
	floorNumber = number;
}
void elevator::print(bool printSelected = false, bool printNumber = false) {
	if(printSelected)
		cout << floorSelected << endl;
	if (printNumber)
		cout << floorNumber << endl;
}
void	elevator::selectFloor(int	floor) {
	if (floor	<	0 || floor >= FLOORS)
		return;
	floorSelected = floor;
}
void	elevator::go() {
	if (floorNumber	<	floorSelected)
		while (++floorNumber	<	floorSelected)
			cout << "floor:	" << floorNumber << ";	going	up!" << endl;
	else	if (floorNumber	>	floorSelected)
		while (floorNumber	>	floorSelected)
			cout << "floor:	" << floorNumber << ";	going	down!" << endl;
	cout << "floor:	" << floorNumber << ";	stopping." << endl;
}
int	main() {
	elevator	A;						//	constructor	called	here
	elevator	B(7, 2);				//	constructor	with	arguments
	A.selectFloor(7);
	A.go();
	A.print(true);
	B.print(false, true);
	return	0;
}