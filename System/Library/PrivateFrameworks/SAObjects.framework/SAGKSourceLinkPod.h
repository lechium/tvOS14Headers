/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIAppPunchOut;

@interface SAGKSourceLinkPod : SAGKPodView

@property (nonatomic,copy) NSString * linkText; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)sourceLinkPod;
+(id)sourceLinkPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)linkText;
-(void)setLinkText:(NSString *)arg1 ;
@end
