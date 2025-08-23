int main()
{

  try
  {
    c1.deposit(100);
    c1.mybalance();
  }
  catch (const runtime_error &msg)
  {
    cerr << "\nError: " << msg.what() << endl;
  }
  catch (const bad_alloc &msg) // Catch exceptions thrown by deposit or withdraw
  {
    cerr << "\nError: " << msg.what() << endl; // Display error message
  }
  catch (...)
  {
    cout << "exception occured " << endl;
  }
}