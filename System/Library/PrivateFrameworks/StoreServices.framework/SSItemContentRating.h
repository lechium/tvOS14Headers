/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, SSItemArtworkImage, NSString;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * contentRatingDictionary; 
@property (nonatomic,readonly) SSItemArtworkImage * ratingSystemLogo; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (assign,nonatomic) long long ratingSystem; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (assign,nonatomic) BOOL shouldHideWhenRestricted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)ratingSystemFromString:(id)arg1 ;
+(id)stringForRatingSystem:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isRestricted;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isExplicitContent;
-(NSDictionary *)contentRatingDictionary;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(long long)ratingSystem;
-(BOOL)_isRatingSystemForApps:(long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(long long)arg1 ;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(void)setRatingSystem:(long long)arg1 ;
-(void)setShouldHideWhenRestricted:(BOOL)arg1 ;
-(BOOL)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(BOOL)_isRatingSystemForMusic:(long long)arg1 ;
@end
