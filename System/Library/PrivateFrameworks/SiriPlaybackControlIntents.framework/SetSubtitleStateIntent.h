/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class Device, LanguageOption, NSArray, DeviceQuery;

@interface SetSubtitleStateIntent : INIntent

@property (nonatomic,copy) Device * device; 
@property (assign,nonatomic) long long enable; 
@property (nonatomic,copy) LanguageOption * language; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end

