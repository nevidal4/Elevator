//	elevatr4.cpp			destructors
#include	<iostream>
#define		FLOORS	10
using	namespace	std;
class	elevator {
private:
	int	floorSelected;
	int	floorNumber;
public:
	elevator(int selected = 3, int number = 6);
	elevator(int	selected, int	number);
	~elevator();
	void	selectFloor(int	floor);
	void	go();
};
elevator::elevator(int selected = 3, int number = 6) {
	floorSelected = selected;
	floorNumber = number;
}
elevator::elevator(int	selected, int	number) {
	floorSelected = selected;
	floorNumber = number;
}
elevator::~elevator() {
	selectFloor(0);
	go();
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
		while (--floorNumber	>	floorSelected)
			cout << "floor:	" << floorNumber << ";	going	down!" << endl;
	cout << "floor:	" << floorNumber << ";	stopping." << endl;
}
int	main() {
	elevator	A;
	elevator	B(7, 2);
	A.selectFloor(7);
	A.go();
	return	0;
}