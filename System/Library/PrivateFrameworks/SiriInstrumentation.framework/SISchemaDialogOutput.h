/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaRedactableString, NSData;

@interface SISchemaDialogOutput : PBCodable {

	NSString* _viewID;
	SISchemaRedactableString* _spokenDialogOutput;
	SISchemaRedactableString* _displayedDialogOutput;
	BOOL _hasViewID;
	BOOL _hasSpokenDialogOutput;
	BOOL _hasDisplayedDialogOutput;

}

@property (nonatomic,copy) NSString * viewID;                                               //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) BOOL hasViewID;                                                //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,retain) SISchemaRedactableString * spokenDialogOutput;                 //@synthesize spokenDialogOutput=_spokenDialogOutput - In the implementation block
@property (assign,nonatomic) BOOL hasSpokenDialogOutput;                                    //@synthesize hasSpokenDialogOutput=_hasSpokenDialogOutput - In the implementation block
@property (nonatomic,retain) SISchemaRedactableString * displayedDialogOutput;              //@synthesize displayedDialogOutput=_displayedDialogOutput - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayedDialogOutput;                                 //@synthesize hasDisplayedDialogOutput=_hasDisplayedDialogOutput - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSpokenDialogOutput:(SISchemaRedactableString *)arg1 ;
-(void)setDisplayedDialogOutput:(SISchemaRedactableString *)arg1 ;
-(NSString *)viewID;
-(SISchemaRedactableString *)spokenDialogOutput;
-(SISchemaRedactableString *)displayedDialogOutput;
-(BOOL)hasViewID;
-(BOOL)hasSpokenDialogOutput;
-(BOOL)hasDisplayedDialogOutput;
-(void)setHasViewID:(BOOL)arg1 ;
-(void)setHasSpokenDialogOutput:(BOOL)arg1 ;
-(void)setHasDisplayedDialogOutput:(BOOL)arg1 ;
@end

