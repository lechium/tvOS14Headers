/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPredicate;

@interface CPAnalyticsConditional : NSObject {

	NSString* _property;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSString * property;                  //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(NSString *)property;
-(id)initWithConfig:(id)arg1 ;
-(id)_validateAndParseConfig:(id)arg1 forKey:(id)arg2 ;
@end
