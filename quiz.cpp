#include <iostream>
using namespace std;

int main()
{
    cout << "============MY PRODUCTIVE DAY SIMULATION============" << endl;
    cout << "Activity breakdown:" << endl;

    int day = 1440;
    int sleep = 132;
    string classList = "Business Statistics, Rhetoric Studies, Programming Concepts, and Publishing on the Web";
    string extracurricularList = "Job, Commuting, and Meals";
    string funList = "Youtube, video games, working out, and coding";

    int homework = 120;
    int meals = 60;
    int workingOut = 100;
    int commuting = 0;
    int job = 120;
    int coding = 60;
    int youtube = 170;
    int videoGames = 320;
    int businessStatistics = 95;
    int rhetoricStudies = 65;
    int programmingConcepts = 95;
    int publishingOnTheWeb = 95;

    int totalProductiveTime = homework + job + coding + businessStatistics + rhetoricStudies + programmingConcepts + publishingOnTheWeb;
    int totalLeisureTime = meals + workingOut + commuting + youtube + videoGames;
    int totalClasses = businessStatistics + rhetoricStudies + programmingConcepts + publishingOnTheWeb;
    int totalExtracurriculars = job + meals;
    int totalFun = youtube + videoGames + workingOut + coding;

    int remainingTime = day - (totalProductiveTime + totalLeisureTime) - sleep;

    int totalTime = totalLeisureTime + totalProductiveTime;
    int hours = totalTime / 60;
    int minutes = totalTime % 60;

    double percentageProductive = (static_cast<double>(totalProductiveTime) / totalTime) * 100.0;

    cout << "Sleep: " << sleep / 60 << " hours and " << sleep % 60 << " minutes" << endl;
    cout << "Classes: " << classList << endl;
	cout << "Total Class Time: " << totalClasses / 60 << " hours and " << totalClasses % 60 << " minutes" << endl;
    cout << "Homework: " << homework / 60 << " hours and " << homework % 60 << " minutes" << endl;
	cout << "================================================" << endl;
    cout << "Fun: " << funList << endl;
    cout << "Extra Curriculars: " << extracurricularList<< " minutes" << endl;
	cout << "Total Extracurricular Time and Fun Time: " << ( totalExtracurriculars + totalFun ) / 60 << " hours and " << (totalExtracurriculars + totalFun) % 60<<" minutes" << endl;
    cout << "Commuting: " << commuting / 60 << " hours and " << commuting % 60 << " minutes" << endl;
	cout << "================================================" << endl;
    cout << "Total Time Spent: " << hours << " hours and " << minutes << " minutes" << endl;
    cout << "Total Productive Time: " << totalProductiveTime /60 << " hours and " << totalProductiveTime % 60 <<" minutes" << endl;
    cout << "Total Leisure Time: " << totalLeisureTime /60 << " hours and " << totalLeisureTime % 60 <<" minutes" << endl;
    cout << "Remaining Time: " << remainingTime << " minutes" << endl;
    cout << "You used " << percentageProductive << "% of your time productively." << endl;
    cout << "Amazing job today! Can you do better tomorrow? :)" << endl;
    cout << "=====================================================" << endl;

    return 0;
}