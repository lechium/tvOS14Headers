/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSNumber, NSString;

@interface HFAnalyticsFaceRecognitionNamedPersonEvent : HFAnalyticsEvent {

	NSNumber* _isNewPerson;
	NSNumber* _personType;
	NSString* _errorDomain;
	NSNumber* _errorCode;

}

@property (nonatomic,retain) NSNumber * isNewPerson;              //@synthesize isNewPerson=_isNewPerson - In the implementation block
@property (nonatomic,retain) NSNumber * personType;               //@synthesize personType=_personType - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,retain) NSNumber * errorCode;                //@synthesize errorCode=_errorCode - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSString *)errorDomain;
-(NSNumber *)errorCode;
-(NSNumber *)personType;
-(void)setPersonType:(NSNumber *)arg1 ;
-(unsigned long long)_namedPersonTypeForPerson:(id)arg1 ;
-(NSNumber *)isNewPerson;
-(void)setIsNewPerson:(NSNumber *)arg1 ;
@end

