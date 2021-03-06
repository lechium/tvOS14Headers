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

@class NSString, NSMutableArray;

@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable <NSCopying> {

	NSString* _endpointUID;
	NSMutableArray* _outputDeviceUIDs;

}

@property (nonatomic,retain) NSMutableArray * outputDeviceUIDs;              //@synthesize outputDeviceUIDs=_outputDeviceUIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasEndpointUID; 
@property (nonatomic,retain) NSString * endpointUID;                         //@synthesize endpointUID=_endpointUID - In the implementation block
+(Class)outputDeviceUIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOutputDeviceUIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputDeviceUIDs;
-(void)setEndpointUID:(NSString *)arg1 ;
-(BOOL)hasEndpointUID;
-(NSString *)endpointUID;
-(void)addOutputDeviceUIDs:(id)arg1 ;
-(unsigned long long)outputDeviceUIDsCount;
-(void)clearOutputDeviceUIDs;
-(id)outputDeviceUIDsAtIndex:(unsigned long long)arg1 ;
@end

