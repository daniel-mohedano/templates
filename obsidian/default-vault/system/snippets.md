# Admonition
> [!note] This is an example title
> This is an example content

> [!tip] This is an example tip
> Hello!

# Dataview
### Table
```SQL
TABLE date, summary
WHERE type = "meeting" AND file.folder != "templates"
```

### Task
```SQL
TASK
WHERE type = "meeting" AND !completed
```

# Templater
### Move File on Template Application

```
<% await tp.file.move("/folder/" + tp.file.title) %>
```

### Rename Prompt

```js
<%*
const hasTitle = !tp.file.title.startsWith("DefaultTitle");
let title;
if (!hasTitle) {
    title = await tp.system.prompt("Title");
    await tp.file.rename(title);
} else {
    title = tp.file.title;
}
_%>
```