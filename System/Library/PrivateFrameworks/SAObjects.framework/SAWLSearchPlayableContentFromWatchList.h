/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (assign,nonatomic) BOOL onlyReturnNextItem; 
@property (nonatomic,copy) NSString * siriLocale; 
@property (nonatomic,copy) NSString * title; 
+(id)searchPlayableContentFromWatchList;
+(id)searchPlayableContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(BOOL)onlyReturnNextItem;
-(void)setOnlyReturnNextItem:(BOOL)arg1 ;
-(NSString *)siriLocale;
-(void)setSiriLocale:(NSString *)arg1 ;
@end
