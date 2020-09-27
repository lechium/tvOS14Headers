/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent {

	_UIDatePickerCalendarMonth* _previousMonth;
	_UIDatePickerCalendarMonth* _nextMonth;

}

@property (nonatomic,readonly) _UIDatePickerCalendarMonth * previousMonth; 
@property (nonatomic,readonly) _UIDatePickerCalendarMonth * nextMonth; 
+(unsigned long long)representedCalendarUnits;
-(id)dayMatchingOrdinalDay:(id)arg1 ;
-(_UIDatePickerCalendarMonth *)nextMonth;
-(_UIDatePickerCalendarMonth *)previousMonth;
-(id)dayWithDate:(id)arg1 assignedMonth:(id)arg2 ;
-(id)_monthWithOffset:(long long)arg1 ;
@end
