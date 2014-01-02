//
// REMenuItem.h
// REMenu
//
// Copyright (c) 2013 Roman Efimov (https://github.com/romaonthego)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@interface REMenuItem : NSObject

@property (copy, readwrite, nonatomic) NSString *title;
@property (copy, readwrite, nonatomic) NSString *subtitle;
@property (copy, readwrite, nonatomic) NSString *badge;
@property (strong, readwrite, nonatomic) UIImage *image;
@property (strong, readwrite, nonatomic) UIImage *higlightedImage;
@property (copy, readwrite, nonatomic) void (^action)(REMenuItem *item);
@property (assign, readwrite, nonatomic) NSInteger tag;
@property (strong, readwrite, nonatomic) UIView *customView;

@property (assign) CGFloat itemHeight;


- (id)initWithTitle:(NSString *)title image:(UIImage *)image highlightedImage:(UIImage *)higlightedImage action:(void (^)(REMenuItem *item))action;
- (id)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle image:(UIImage *)image highlightedImage:(UIImage *)higlightedImage action:(void (^)(REMenuItem *item))action;
- (id)initWithCustomView:(UIView *)customView action:(void (^)(REMenuItem *item))action;
- (id)initWithCustomView:(UIView *)customView;

@end
