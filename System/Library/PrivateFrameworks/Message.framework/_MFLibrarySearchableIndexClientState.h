/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface _MFLibrarySearchableIndexClientState : NSObject {

	NSNumber* _transactionValue;
	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionValue; 
@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientState;
+(id)clientStateFromData:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(long long)transaction;
-(void)setTransaction:(long long)arg1 ;
-(NSString *)systemBuildVersion;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)archiveRepresentation;
-(NSNumber *)transactionValue;
@end

