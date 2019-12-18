//	elevatr5.cpp
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
	~elevator();
	void	selectFloor(int	floor);
	void	go();
};
elevator::elevator() {
	cout << this <<" constructor statement" << endl;
	floorSelected = 0;
	floorNumber = 0;
}
elevator::elevator(int	selected, int	number) {
	cout << this << " constructor statement" << endl;
	floorSelected = selected;
	floorNumber = number;
}
elevator::~elevator() {
	cout << this << " destructor statement" << endl;
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
	cout << "A constructor statement" << endl;
	elevator	B(7, 2);
	cout << "B constructor statement" << endl;
	A.selectFloor(7);
	A.go();
	return	0;
}
