
#include "main.hpp"

class PhoneBook
{
	private:
		Contact *pb = new Contact[8];
		int		old_contact;
		int		is_max; // 지워도 될듯
		void	get_contact(int index);

	public:
		PhoneBook();	//Constructor
		~PhoneBook();	//Destructor    delete 해야하나?
		Contact *ft_add();
		void	ft_search();
};
