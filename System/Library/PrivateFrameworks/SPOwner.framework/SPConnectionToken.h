/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSDateInterval;


@protocol SPConnectionToken <NSObject>
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy,readonly) NSData * connectionToken; 
@property (nonatomic,copy,readonly) NSData * commandKey; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@required
-(NSData *)address;
-(NSDateInterval *)dateInterval;
-(NSData *)commandKey;
-(NSData *)connectionToken;

@end
