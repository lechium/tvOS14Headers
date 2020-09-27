/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString;

@interface GKConcernInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _message;
	unsigned _concernID;

}

@property (nonatomic,retain) GKPlayerInternal * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) unsigned concernID;                     //@synthesize concernID=_concernID - In the implementation block
@property (nonatomic,copy) NSString * message;                       //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(unsigned)concernID;
-(void)setConcernID:(unsigned)arg1 ;
@end
