/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding> {

	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	BOOL _isVoiceReadyToUse;
	NSString* _name;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * languages;                   //@synthesize languages=_languages - In the implementation block
@property (assign,nonatomic) long long gender;                    //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long footprint;                 //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                    //@synthesize isInstalled=_isInstalled - In the implementation block
@property (assign,nonatomic) BOOL isBuiltInVoice;                 //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (assign,nonatomic) BOOL isVoiceReadyToUse;              //@synthesize isVoiceReadyToUse=_isVoiceReadyToUse - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)typeFromString:(id)arg1 ;
+(id)languagesFromMobileAssetAttributes:(id)arg1 ;
+(long long)genderFromString:(id)arg1 ;
+(long long)footprintFromString:(id)arg1 ;
+(id)compatibilityVersionFromMobileAssetAttributes:(id)arg1 ;
+(id)typeStringFromType:(long long)arg1 ;
+(id)footprintStringFromFootprint:(long long)arg1 ;
+(id)genderStringFromGender:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(BOOL)isInstalled;
-(NSArray *)languages;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(void)amendNameVersionAndSizeWithMobileAssetAttributes:(id)arg1 ;
-(id)initFromMobileAssetAttributes:(id)arg1 ;
-(id)voiceKey;
-(id)descriptiveKey;
-(BOOL)isVoiceReadyToUse;
-(long long)footprint;
-(void)setIsInstalled:(BOOL)arg1 ;
-(void)setIsBuiltInVoice:(BOOL)arg1 ;
-(void)setIsVoiceReadyToUse:(BOOL)arg1 ;
-(id)nameKey;
-(BOOL)isBuiltInVoice;
@end
