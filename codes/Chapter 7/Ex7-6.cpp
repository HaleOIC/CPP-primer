istream &read( istream &is, Sales_data &item ){
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print( ostream &os, Sales_data &item ){
	os << item.isbs() << " " << item.units_sold << " "
		<< item.revenue << " " << item.average_price();
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs ){
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}