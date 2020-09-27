/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMMeCardSharingStateController : NSObject

@property (assign,nonatomic) BOOL sharingEnabled; 
@property (assign,nonatomic) unsigned long long sharingAudience; 
@property (assign,nonatomic) unsigned long long nameFormat; 
@property (assign,nonatomic) BOOL nameForkedFromMeCard; 
@property (assign,nonatomic) BOOL imageForkedFromMeCard; 
+(id)sharedInstance;
-(id)init;
-(BOOL)sharingEnabled;
-(void)_migrateMeCardDomains;
-(void)_syncPreferenceDidChange;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(void)_incrementSharingVersion;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(unsigned long long)sharingAudience;
-(unsigned long long)nameFormat;
-(void)setNameFormat:(unsigned long long)arg1 ;
-(void)postNameFormatChangedNotification;
-(BOOL)nameForkedFromMeCard;
-(void)setNameForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)imageForkedFromMeCard;
-(void)setImageForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)wasSharingEverEnabled;
@end
