/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaAudioFirstBufferRecorded : PBCodable {

	int _audioInputRoute;
	SISchemaHardwareInterfaceIdentifier* _hardwareInterfaceVendorID;
	SCD_Struct_SI1 _has;
	BOOL _hasHardwareInterfaceVendorID;

}

@property (assign,nonatomic) int audioInputRoute;                                                          //@synthesize audioInputRoute=_audioInputRoute - In the implementation block
@property (assign,nonatomic) BOOL hasAudioInputRoute; 
@property (nonatomic,retain) SISchemaHardwareInterfaceIdentifier * hardwareInterfaceVendorID;              //@synthesize hardwareInterfaceVendorID=_hardwareInterfaceVendorID - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareInterfaceVendorID;                                            //@synthesize hasHardwareInterfaceVendorID=_hasHardwareInterfaceVendorID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAudioInputRoute:(int)arg1 ;
-(void)setHardwareInterfaceVendorID:(SISchemaHardwareInterfaceIdentifier *)arg1 ;
-(SISchemaHardwareInterfaceIdentifier *)hardwareInterfaceVendorID;
-(int)audioInputRoute;
-(BOOL)hasAudioInputRoute;
-(void)setHasAudioInputRoute:(BOOL)arg1 ;
-(BOOL)hasHardwareInterfaceVendorID;
-(void)setHasHardwareInterfaceVendorID:(BOOL)arg1 ;
@end
