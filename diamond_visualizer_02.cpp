using std::abs;
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;

string centered_line(int width, int padding){
        string new_string{""};
        for(int i=0;i<padding;i++){
                new_string += " ";
        }
        for(int i=0;i<width;i++){
                new_string += "#";
        }
        for(int i=0;i<padding;i++){
                new_string += " ";
        }
        return new_string;
}

void print_diamond(int height){
	vector<string> lines;
	int width{0};
	for(int i = 0; i<height; i++){
		width = (-2 * abs(i - (height / 2))) + height;
		lines.push_back(centered_line(width, ((height-width)/2)));
	}
	for(string i:lines)
	{
		cout << i << endl;
	}
}
int main(){
	int height{0};
	string prompt{"Enter a positive odd integer: "};
	cout << prompt;
	while(cin >> height){
		if((height % 2) > 0){  
			print_diamond(height);
		}
		cout << prompt;
	}
	return 0;
}