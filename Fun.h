class Fun{
private:
	int width_, height_;
	
	enum colors{
		RED = 31,
		GREEN = 32
	};
	
	void print_all();
	void print_color(int color_code);
public:
	Fun(int width, int height);
};
