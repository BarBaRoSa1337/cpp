#include "iter.hpp"
<<<<<<< HEAD

void toUpperCase(const std::string& value)
{
    for (size_t i = 0; i < value.length(); ++i)
    {
        char upperChar = value[i];
        if (upperChar >= 'a' && upperChar <= 'z')
        {
            upperChar -= ('a' - 'A');
        }
        std::cout << upperChar;
    }
    std::cout << std::endl;
}

int main()
{
    std::string arr[] = {"Hello", "World", "!"};
    int length = sizeof(arr) / sizeof(arr[0]);

    iter<std::string>(arr, length, toUpperCase);

    return 0;
=======
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
>>>>>>> 1a5507ec1065ad9c905097cad70141ecd2d697a7
}