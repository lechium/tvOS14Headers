/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _ionoDatas;
	CLPMeta* _meta;

}

@property (nonatomic,readonly) BOOL hasMeta; 
@property (nonatomic,retain) CLPMeta * meta;                          //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * ionoDatas;              //@synthesize ionoDatas=_ionoDatas - In the implementation block
+(Class)ionoDataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(BOOL)hasMeta;
-(CLPMeta *)meta;
-(void)addIonoData:(id)arg1 ;
-(unsigned long long)ionoDatasCount;
-(void)clearIonoDatas;
-(id)ionoDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ionoDatas;
-(void)setIonoDatas:(NSMutableArray *)arg1 ;
@end
