#include "Connection.h"


using namespace connection;

Connect::Connect()
{
	this->sqlQuery = "DEFAULT";
	connStrinfBuilder = gcnew SqlConnectionStringBuilder();

	connStrinfBuilder->DataSource = "DESKTOP-P3RNDHD";
	connStrinfBuilder->InitialCatalog = "DBProjet";
	connStrinfBuilder->IntegratedSecurity = true;

	this->conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));

	this->cmd = gcnew SqlCommand(this->sqlQuery, this->conn);
	this->cmd->CommandType = CommandType::Text;
}

int Connect::actionRowsID(String^ sqlQuery)
{
	int id;
	this->setSQL(sqlQuery);
	this->cmd->CommandText = this->sqlQuery;
	this->conn->Open();
	id = Convert::ToInt32(this->cmd->ExecuteScalar());
	this->conn->Close();
	return id;
}

void Connect::actionRows(String^ sqlQuery)
{
	this->setSQL(sqlQuery);
	this->cmd->CommandText = this->sqlQuery;
	this->conn->Open();
	this->cmd->ExecuteNonQuery();
	this->conn->Close();
}

DataSet^ Connect::getRows(String^ sqlQuery, String^ dataTableName)
{
	this->conn->Open();
	this->setSQL(sqlQuery);
	this->da = gcnew SqlDataAdapter(this->cmd);
	this->cmd->CommandText = this->sqlQuery;
	this->ds = gcnew DataSet();
	this->da->Fill(this->ds, dataTableName);

	this->conn->Close();

	return this->ds;
}

void Connect::setSQL(String^ sqlQuery)
{
	if (sqlQuery == "" || sqlQuery == "DEFAULT")
	{
		this->sqlQuery = "DEFAULT";
	}
	else
	{
		this->sqlQuery = sqlQuery;
	}
}

void Connect::openConnection()
{
	this->conn->Open();
}

void Connect::closeConnection()
{
	this->conn->Close();
}

bool Connect::connection(String^ mail, String^ password)
{
	String^ query = "select Personne.ID_PERSONNE from DBProjet.dbo.Personne INNER JOIN DBProjet.dbo.Personnel ON Personne.ID_PERSONNE = Personnel.ID_PERSONNE WHERE Personne.ADRESSE_MAIL ='" + mail + "' AND Personnel.MOT_DE_PASSE='" + password + "';";

	openConnection();

	SqlDataAdapter^ SDA = gcnew SqlDataAdapter(query, this->conn);
	DataTable^ DT = gcnew DataTable();
	SDA->Fill(DT);

	if (DT->Rows->Count == 1)
	{
		return true;
	}
	else
	{
		return false;
	}

	closeConnection();

}

SqlConnection^ Connect::getConn()
{
	return this->conn;
}