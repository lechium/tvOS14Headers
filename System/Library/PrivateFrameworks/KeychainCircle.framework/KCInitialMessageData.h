/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface KCInitialMessageData : PBCodable <NSCopying> {

	NSData* _prepareMessage;

}

@property (nonatomic,readonly) BOOL hasPrepareMessage; 
@property (nonatomic,retain) NSData * prepareMessage;               //@synthesize prepareMessage=_prepareMessage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasPrepareMessage;
-(NSData *)prepareMessage;
-(void)setPrepareMessage:(NSData *)arg1 ;
@end

