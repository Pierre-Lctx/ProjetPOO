#pragma once

//includes

#include <ostream>
#include <iostream>
#include <string>

//Déclaration des namespaces utilisés

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
using namespace std;

namespace connection
{
	ref class Connect
	{
	private:
		String^ cnx;
		String^ sqlQuery;
		SqlCommand^ cmd;
		SqlDataAdapter^ da;
		DataSet^ ds;
		void setSQL(String^);
		SqlConnectionStringBuilder^ connStrinfBuilder;
		SqlConnection^ conn;


	public:
		Connect(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
		void openConnection();
		void closeConnection();
		bool connection(String^, String^);
		SqlConnection^ getConn();
	};
}
