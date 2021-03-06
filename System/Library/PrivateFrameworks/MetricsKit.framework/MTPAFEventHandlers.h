/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTMediaActivityEventHandler;

@interface MTPAFEventHandlers : MTEventHandlers

@property (nonatomic,readonly) MTMediaActivityEventHandler * playStart; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * playStop; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStart; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStop; 
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(MTMediaActivityEventHandler *)seekStart;
-(MTMediaActivityEventHandler *)seekStop;
-(MTMediaActivityEventHandler *)playStart;
-(MTMediaActivityEventHandler *)playStop;
@end

