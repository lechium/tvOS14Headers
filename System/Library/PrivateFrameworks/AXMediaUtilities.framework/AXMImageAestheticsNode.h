/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode {

	VNClassifyImageAestheticsRequest* __imageAestheticsRequest;

}

@property (nonatomic,retain) VNClassifyImageAestheticsRequest * _imageAestheticsRequest;              //@synthesize _imageAestheticsRequest=__imageAestheticsRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(VNClassifyImageAestheticsRequest *)_imageAestheticsRequest;
-(void)set_imageAestheticsRequest:(VNClassifyImageAestheticsRequest *)arg1 ;
@end
