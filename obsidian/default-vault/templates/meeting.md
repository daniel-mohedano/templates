---
date: <% tp.date.now("YYYY-MM-DD") %>
time: <% tp.date.now("hh:mm") %>
type: meeting
summary: ""
tags: 
---
<% await tp.file.move("/meetings/ + tp.file.title") %>

<%*
const hasTitle = !tp.file.title.startsWith("NewMeeting");
let title;
if (!hasTitle) {
    title = await tp.date.now("YYYYMMDDhhmm");
    await tp.file.rename(title);
} else {
    title = tp.file.title;
}
_%>

## Agenda
<% tp.file.cursor() %>

## Log

## Next Actions