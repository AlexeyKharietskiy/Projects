
#include "pch.h"
#include "CppUnitTest.h"
#include"..//ppois2/Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TravelAgencyTests
{
	TEST_CLASS(TravelAgencyTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Tourist Ann("Ann", 20, 1000);
			BookSystem star("Star", 100);
			AccommodationSystem hotel("Hotel", 1, AccommodationSystem::RoomType::ECONOM);
			ActivitySystem funny("Fun");
			star.bookTour(Ann);
			Assert::AreEqual(1, Ann.getBookID());
			Ann.pay(&star);
			Assert::AreEqual(900., Ann.getMoney());
			Ann.pay(&hotel);
			funny.doActivity(Ann, ActivitySystem::Activities::MUSEUM);
			Ann.pay(&funny);
		}
		TEST_METHOD(TestMethod2)
		{
			Tourist Ann("Ann", 20, 1000);
			Employee Bob("Bob", 1500);
			Bob.doWork();
			Assert::AreEqual(100.,Bob.getMoney());
		}
		TEST_METHOD(TestMethod3)
		{
			Tourist Ann("Ann", 20, 1000);
			TourSystem way("Way", 10);
			TransportSystem car("Car", way);
			way.setStartCoordinates(1, 2);
			way.setEndCoordinates(5, 6);
			car.getRoute();
			Ann.pay(&car);

		}
	};
}
