/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying> {

	double _endTime;
	double _startTime;
	_MRLyricsTokenProtobuf* _token;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) _MRLyricsTokenProtobuf * token;              //@synthesize token=_token - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)startTime;
-(_MRLyricsTokenProtobuf *)token;
-(void)setStartTime:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setToken:(_MRLyricsTokenProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(BOOL)hasToken;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
@end
