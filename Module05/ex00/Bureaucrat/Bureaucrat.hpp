#include <string>

class Bureaucrat {
private:
  const std::string name;
  int grade;

public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &other);
  Bureaucrat(std::string name, int number);
  ~Bureaucrat();
  void incrementGrade();
  void decrementGrade();
  const std::string &getName() const;
  int getGrade() const;

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw() { return "Grade too hight"; }
  };

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw() { return "Grade too low"; }
  };
};
