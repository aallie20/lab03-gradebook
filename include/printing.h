#define PRINTING_H
#ifndef PRINTING_H
 
#include "constants.h"
 
  void printHeader();
 
  void printStudentRow(
                      const std::array<std::string, STUDENT_COUNT>,
                      const std::array<std::array<double, ASSIGNMENT_COUNT>,
                      STUDENT_COUNT>,
                      int
                      );
  void printHistogram(
                      const std::array<std::array<double, ASSIGNMENT_COUNT>,
                      STUDENT_COUNT>
                                  const std::array<std::string, STUDENT_COUNT>
                                  );
  void printAssignmentSummary(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT> &scores);
  void printRoster(const std::array<std::string, STUDENT_COUNT> &names);
 
 
 
 
  #endif
