/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSString * participantID; 
@property (nonatomic,copy,readonly) NSString * shareID; 
@property (nonatomic,copy,readonly) NSString * zoneID; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSString *)bundleID;
-(NSString *)zoneID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)participantID;
-(NSString *)shareID;
@end
