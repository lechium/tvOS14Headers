/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {

	NSData* _pairingData;
	int _state;
	int _status;
	BOOL _isRetrying;
	BOOL _isUsingSystemPairing;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) BOOL hasPairingData; 
@property (nonatomic,retain) NSData * pairingData;                      //@synthesize pairingData=_pairingData - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasIsRetrying; 
@property (assign,nonatomic) BOOL isRetrying;                           //@synthesize isRetrying=_isRetrying - In the implementation block
@property (assign,nonatomic) BOOL hasIsUsingSystemPairing; 
@property (assign,nonatomic) BOOL isUsingSystemPairing;                 //@synthesize isUsingSystemPairing=_isUsingSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                 //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasState;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)isUsingSystemPairing;
-(void)setPairingData:(NSData *)arg1 ;
-(BOOL)hasPairingData;
-(void)setIsRetrying:(BOOL)arg1 ;
-(void)setHasIsRetrying:(BOOL)arg1 ;
-(BOOL)hasIsRetrying;
-(void)setIsUsingSystemPairing:(BOOL)arg1 ;
-(void)setHasIsUsingSystemPairing:(BOOL)arg1 ;
-(BOOL)hasIsUsingSystemPairing;
-(NSData *)pairingData;
-(BOOL)isRetrying;
@end
