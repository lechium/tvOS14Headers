/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {

	int _inputModeFlags;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasInputModeFlags; 
@property (assign,nonatomic) int inputModeFlags;                  //@synthesize inputModeFlags=_inputModeFlags - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setInputModeFlags:(int)arg1 ;
-(int)inputModeFlags;
-(void)setHasInputModeFlags:(BOOL)arg1 ;
-(BOOL)hasInputModeFlags;
-(id)inputModeFlagsAsString:(int)arg1 ;
-(int)StringAsInputModeFlags:(id)arg1 ;
@end
